#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.1.2.i/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            char* c = new char(40);
            char q[] = "SQ";
            char q1[] = "QS";
            char str[] = "SQqqq";
            char zamina[] = "***";
            c = change(str, q, q1, zamina);
            Assert::AreEqual(c, "***qqq");
        }
    };
}