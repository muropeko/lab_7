#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int** a, const int n, const int Low, const int High, const int k);
void Print(int** a, const int n, const int k);
int MaxMin(int** a, const int rowCount, const int colCount);

int main()
{
	srand((unsigned)time(NULL));
	int Low = 1;
	int High = 20;
	int n, k;

	cout << "n = "; cin >> n;
	cout << "k = "; cin >> k;

	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[k];

	Create(a, n, Low, High, k);
	Print(a, n, k);
	MaxMin(a, n, k);
}
void Create(int** a, const int n, const int Low, const int High, const int k)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}
void Print(int** a, const int n, const int k)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}

int MaxMin(int** a, const int rowCount, const int colCount)
{
	int min, max;
	for (int i = 0; i < rowCount; i++)
	{
		max = a[i][0];
		for (int j = 0; j < colCount; j++)
			if (a[i][j] > max){
				max = a[i][j];
			}
			if (i == 0){
				min = max;
			}
			if (max < min){
				min = max;
		}
	}
	cout << min << endl;
	cout << max << endl;
	return max;
}