#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.5/Array.h"
#include "../lab3.5/Array.cpp"
#include "../lab3.5/Set.h"
#include "../lab3.5/Set.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Set a(5);
			Assert::AreEqual(a.kilkist(), 5);
		}
	};
}
