#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.4/Lab5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int N = 1;
			double expected = P0(N);

			Assert::AreEqual(expected, P1(N, N), 1e-10);
			Assert::AreEqual(expected, P2(N, 16), 1e-10);
			Assert::AreEqual(expected, P3(N, N, 1), 1e-10);
			Assert::AreEqual(expected, P4(N, 16, 1), 1e-10);
		}
	
	};
}
