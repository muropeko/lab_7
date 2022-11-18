#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7_1_rec/lab_7_1_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test71rec
{
	TEST_CLASS(test71rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = (3, 2, 2, 0, 0);
			Assert::AreEqual(t, 0);
		}
	};
}
