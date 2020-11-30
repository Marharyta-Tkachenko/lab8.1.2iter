#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.1.2.i/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* c;
			char q[] = "SQ";
			char q1[] = "QS";
			char str[] = "SQqqqQSsss";
			char zamina[] = "***";
			c = change(str, q, q1, zamina);
			Assert::AreEqual(c, "***qqq***sss");
		}
	};
}
