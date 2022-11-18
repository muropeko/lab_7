#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7_2/lab_7_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test72
{
	TEST_CLASS(test72)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = (2, 3, 3);
			Assert::AreEqual(t, 3);

		}
	};
}
