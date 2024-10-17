#include "pch.h"
#include "CppUnitTest.h"
#include "C:\\Users\\DELL\\source\\repos\\CSCN71020_A2\\BCSRec\\main.h" // Ensure this path is correct

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
    TEST_CLASS(BCSRecTests)
    {
    public:
        // Unit test for getPerimeter function
        TEST_METHOD(TestGetPerimeter)
        {
            int length = 10;
            int width = 5;
            int expectedPerimeter = 30; // Perimeter = 2 * (length + width)
            int actualPerimeter = getPerimeter(&length, &width);
            Assert::AreEqual(expectedPerimeter, actualPerimeter);
        }

        // Unit test for getArea function
        TEST_METHOD(TestGetArea)
        {
            int length = 10;
            int width = 5;
            int expectedArea = 50; // Area = length * width
            int actualArea = getArea(&length, &width);
            Assert::AreEqual(expectedArea, actualArea);
        }

        // Tests for setLength
        TEST_METHOD(TestSetLength_Usual)
        {
            int length = 1;
            setLength(50, &length);
            Assert::AreEqual(50, length);
        }

        TEST_METHOD(TestSetLength_LowerBound)
        {
            int length = 1;
            setLength(1, &length);
            Assert::AreEqual(1, length);
        }

        TEST_METHOD(TestSetLength_UpperBound)
        {
            int length = 1;
            setLength(99, &length);
            Assert::AreEqual(99, length);
        }

        // Tests for setWidth
        TEST_METHOD(TestSetWidth_Usual)
        {
            int width = 1;
            setWidth(75, &width);
            Assert::AreEqual(75, width);
        }

        TEST_METHOD(TestSetWidth_LowerBound)
        {
            int width = 1;
            setWidth(1, &width);
            Assert::AreEqual(1, width);
        }

        TEST_METHOD(TestSetWidth_UpperBound)
        {
            int width = 1;
            setWidth(99, &width);
            Assert::AreEqual(99, width);
        }
    };
}
