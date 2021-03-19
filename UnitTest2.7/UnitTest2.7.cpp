#include "pch.h"
#include "CppUnitTest.h"
#include"../2.7/Point.h"
#include"../2.7/Point.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest27
{
	TEST_CLASS(UnitTest27)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point c;
			Assert::IsTrue(c.Vidstan() == sqrt(c.GetX() * c.GetX() + c.GetY() * c.GetY()));
		}
	};
}
