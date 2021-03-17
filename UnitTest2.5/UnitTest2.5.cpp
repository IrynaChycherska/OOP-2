#include "pch.h"
#include "CppUnitTest.h"
#include"../2.5/Rectangle.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest25
{
	TEST_CLASS(UnitTest25)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Rectangle c;
			Assert::IsTrue(c.s() == c.getA() * c.getB());
		}
	};
}