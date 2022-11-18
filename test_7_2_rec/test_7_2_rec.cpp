#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7_2_rec/lab_7_2_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test72rec
{
	TEST_CLASS(test72rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = (1, 2, 2, 1, 20, 0, 0);
			Assert::AreEqual(t, 0);


		}
	};
}
