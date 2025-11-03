#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "../Lab5.3/Lab5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		// |x| >= 1 — перевірка формули (наприклад x = 1)
		TEST_METHOD(Test_Y_argument_equis_one)
		{			
			double expected = exp(1.0) / (1 + exp(1.0) + sin(1.0));
			double result = y(1.0);

			Assert::AreEqual(expected, result);
		}

		// |x| < 1 — перевірка y(0) = 1 (ряд Тейлора)
		TEST_METHOD(Test_Y_Zero)
		{
			Assert::AreEqual(1.0, y(0.0));
		}
	};
}
