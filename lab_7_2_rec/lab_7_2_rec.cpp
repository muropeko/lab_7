// lab_7_2.cpp
// Довгошиї Анастасії
// Лабораторна робота № 7.2.
// Опрацювання багатомивірних масивів ітераційним і рекурсивним способами.
// Варіант 6

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int** a, const int rowCount, const int colCount,
	const int Low, const int High, int i, int j)
{
	a[i][j] = Low + rand() % (High - Low + 1);
	if (j < colCount - 1)
		Create(a, rowCount, colCount, Low, High, i, j + 1);
	else
		if (i < rowCount - 1)
			Create(a, rowCount, colCount, Low, High, i + 1, 0);
}

void Print(int** a, const int rowCount, const int colCount, int i)
{
	for (int j = 0; j < colCount; j++)
		cout << setw(4) << a[i][j];
	cout << endl;
	if (i < rowCount - 1)
		Print(a, rowCount, colCount, i + 1);
	else
		cout << endl;
}

void MinRow(int** a, const int rowNo, const int colCount, int colNo, int& min)
{
	if (a[rowNo][colNo] < min)
		min = a[rowNo][colNo];
	if (colNo < colCount - 1)
		MinRow(a, rowNo, colCount, colNo + 1, min);
}

void MaxMinRows(int** a, const int rowCount, const int colCount, int rowNo, int& max)
{
	int min = a[rowNo][0];
	MinRow(a, rowNo, colCount, 1, min);
	if (rowNo == 0)
		max = min;
	if (min > max)
		max = min;
	if (rowNo < rowCount - 1)
		MaxMinRows(a, rowCount, colCount, rowNo + 1, max);
}

void MaxMin(int** a, const int rowCount, const int colCount)
{
	int min, max;
	for (int i = 0; i < rowCount; i++)
	{
		max = a[i][0];
		for (int j = 0; j < colCount; j++)
			if (a[i][j] > max) {
				max = a[i][j];
			}
		if (i == 0) {
			min = max;
		}
		if (max < min) {
			min = max;
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int N, K;
	cout << "N = "; cin >> N;
	cout << "K = "; cin >> K;
	cout << endl;

	int** a = new int* [N];
	for (int i = 0; i < N; i++)
		a[i] = new int[K];

	int Low = 1, High = 20;
	Create(a, N, K, Low, High, 0, 0);
	cout << endl;
	Print(a, N, K, 0);

	int max;
	MaxMinRows(a, K, N, 0, max);
	cout << max;


	for (int i = 0; i < N; i++)
		delete[] a[i];
	delete[] a;
	return 0;
}




