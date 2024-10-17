#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\DELL\source\repos\CSCN71020_A2\BCSRec\main.h" // Adjust the relative path accordingly

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
    TEST_CLASS(BCSRecTests)
    {
    public:
        // Test method for getPerimeter function
        TEST_METHOD(TestGetPerimeter)
        {
            int length = 10;
            int width = 5;
            int expectedPerimeter = 30; // Perimeter = 2 * (length + width)
            int actualPerimeter = getPerimeter(&length, &width);
            Assert::AreEqual(expectedPerimeter, actualPerimeter);
        }

        // Additional test methods can go here
    };
}
