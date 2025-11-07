#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.5/Lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
        // Тест: n = 0 → x^0 = 1
        TEST_METHOD(Test_Power_ZeroExponent)
        {
            double result = power(5.0, 0);
            Assert::AreEqual(1.0, result);
        }

        // Тест: Додатний показник → 2^3 = 8
        TEST_METHOD(Test_Power_PositiveExponent)
        {
            double result = power(2.0, 3);
            Assert::AreEqual(8.0, result);
        }

        // Тест: Від’ємний показник → 2^-2 = 1/4
        TEST_METHOD(Test_Power_NegativeExponent)
        {
            double result = power(2.0, -2);
            Assert::AreEqual(0.25, result, 1e-10); // з точністю
        }
	};
}
