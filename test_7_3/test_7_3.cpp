#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7_3/lab_7_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test73
{
	TEST_CLASS(test73)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = (3, 2, 2);
			Assert::AreEqual(t, 2);


		}
	};
}
