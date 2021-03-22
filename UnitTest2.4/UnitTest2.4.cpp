#include "pch.h"
#include "CppUnitTest.h"
#include "../2.4/Matrix.h"
#include"../2.4/Matrix.cpp"
#include"../2.4/Array.h"
#include"../2.4/Array.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest24
{
	TEST_CLASS(UnitTest24)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Matrix A(2), B(2);
			Assert::AreEqual(A == B, true);
		}
	};
}