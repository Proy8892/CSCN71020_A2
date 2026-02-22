#include "pch.h"
#include "CppUnitTest.h"
#include "main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(BCSRecTests)
	{
	public:
		
		TEST_METHOD(TestGetPerimeter_ValidValues)
		{
			int length = 5;
			int width = 4;

			int result = getPerimeter(&length, &width);

			Assert::AreEqual(18, result);
		}

		TEST_METHOD(TestGetArea_ValidValues)
		{
			int length = 5;
			int width = 4;

			int result = getArea(&length, &width);

			Assert::AreEqual(20, result);
		}
		TEST_METHOD(TestSetLength_ValidTypical_UpdatesLength)
		{
			int length = 10;
			setLength(50, &length);
			Assert::AreEqual(50, length);
		}

		TEST_METHOD(TestSetLength_InvalidNegative_DoesNotChangeLength)
		{
			int length = 10;
			setLength(-1, &length);
			Assert::AreEqual(10, length);
		}

		TEST_METHOD(TestSetLength_UpperBoundary_99Valid_UpdatesLength)
		{
			int length = 10;
			setLength(99, &length);
			Assert::AreEqual(99, length);
		}
		TEST_METHOD(TestSetWidth_ValidTypical_UpdatesWidth)
		{
			int width = 10;
			setWidth(50, &width);
			Assert::AreEqual(50, width);
		}

		TEST_METHOD(TestSetWidth_InvalidZero_DoesNotChangeWidth)
		{
			int width = 10;
			setWidth(0, &width);
			Assert::AreEqual(10, width);
		}

		TEST_METHOD(TestSetWidth_UpperBoundary_100Valid_UpdatesWidth)
		{
			int width = 10;
			setWidth(100, &width);
			Assert::AreEqual(100, width);
		}
		
	};
}
