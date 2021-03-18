#include "pch.h"
#include "CppUnitTest.h"
#include"../2.6/Rectangle.h"
#include"../2.6/Rectangle.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest26
{
	TEST_CLASS(UnitTest26)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rectangle b;
			Assert::IsTrue(b.s() == b.getA() * b.getB());
		}
	};
}