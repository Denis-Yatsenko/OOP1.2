#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_1.2/Payment.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Payment man;
			man.Init("Arthur", 200, 2019, 0.25, 20, 30);
			int p = man.CountStazh();
			Assert::AreEqual(p, 2);
			
		}
	};
}
