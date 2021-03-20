#include "pch.h"
#include "CppUnitTest.h"
#include"../2.8/Triangle.h"
#include"../2.8/Triangle.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest28
{
	TEST_CLASS(UnitTest28)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle::Point c;
			Assert::IsTrue(c.Vidstan() == sqrt(c.GetX() * c.GetX() + c.GetY() * c.GetY()));
		}
	};
}
