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
		
	};
}
