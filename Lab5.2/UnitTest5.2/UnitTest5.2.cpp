#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "../Lab5.2/Lab5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest52
{
    TEST_CLASS(UnitTest52)
    {
    public:

		// Тест 1: перевірка функції A() — рекурентного співвідношення
		TEST_METHOD(Test_A_Function)
		{
			double a = 0.1;  // початковий доданок
			double x = 0.5;
			int n = 0;

			A(x, n, a);  // виклик функції A()

			// очікуване значення:
			// R = (x^2) * (2n + 1) / (2n + 3)
			// R = (0.25) * (1) / (3) = 0.0833333
			// a*= R
			double expected = 0.1 * (0.25 * 0.33333333);

			Assert::AreEqual(expected, a, 1e-7);
		}

		TEST_METHOD(Test_S_Function)
		{
			double x = 0.3;
			double eps = 1e-6;
			int n;
			double s;

			S(x, eps, n, s);  // обчислення суми ряду

			// Очікуване значення — через стандартну функцію atanh(x)
			double expected = atanh(x);

			Assert::AreEqual(expected, s, 1e-5);
		}

    };
}
