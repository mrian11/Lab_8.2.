#include "pch.h"
#include "CppUnitTest.h"
#include"../Lab_8.2/LAB.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			 // Test case 1: basic test
            string input1 = "This is (a) test";
            string expected_output1 = "This is  test";
            Assert::AreEqual(deleteBetween(input1), expected_output1);
		}
	};
}
