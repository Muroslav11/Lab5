#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1/Lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(Test_f_Function)
		{
			double result = f(1, 2, 3);
			double expected = (1 + 2 + 3) / (pow(sin(2), 2) + pow(3, 2));
			Assert::AreEqual(expected, result);
		}
	};
}
