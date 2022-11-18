#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7_1/lab_7_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test71
{
	TEST_CLASS(test71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			int t;
			t =  (3, 0, 0, 1, 3);
			Assert::AreEqual(t, 3);

		}
	};
}
