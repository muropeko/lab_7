#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7_3_rep/lab_7_3_rep.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test73rec
{
	TEST_CLASS(test73rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = (2, 2, 2, 0);;
			Assert::AreEqual(t, 0);
		}
	};
}
