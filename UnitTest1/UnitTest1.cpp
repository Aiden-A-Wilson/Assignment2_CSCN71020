#include "pch.h"
#include "CppUnitTest.h"


extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_task1
{
	TEST_CLASS(UnitTest_task1)
	{
	public:
		
		TEST_METHOD(Perimeter_test)
		{
			// this is testing the perimeter function
			int length = 4;
			int width = 2;
			int expected = 0;
			// sets expects to what the function calculates
		    expected = getPerimeter(&length, &width);
			Assert::AreEqual(12, expected);
		}
		TEST_METHOD(Area_test)
		{
			// this is testing the area function
			int length = 4;
			int width = 2;
			int expected = 0;
			// sets expects to what the function calculates
			expected = getArea(&length, &width);
			Assert::AreEqual(8, expected);
		}
		TEST_METHOD(set_the_length_test1) 
		{
			// this is testing the set length function 
			int input = 0;
			// setting to a number that is not the same as input
			int length = 1;
			bool expected = false;
			setLength(input, &length);
			// test, input should not equal length because 0 is outside of the requirement
			// so expected should stay false
			if (input == length) {
				expected = true;
			}
			Assert::AreEqual(false, expected);
		}
		TEST_METHOD(set_the_length_test2)
		{
			// this is testing the set length function 
			int input = 100;
			// setting to a number that is not the same as input
			int length = 99;
			bool expected = false;
			setLength(input, &length);
			// test, input should not equal length because 100 is outside of the requirement
			// so expected should stay false
			if (input == length) {
				expected = true;
			}
			Assert::AreEqual(false, expected);
		}
		TEST_METHOD(set_the_length_test3)
		{
			// this is testing the set length function 
			int input = 50;
			// setting to a number that is not the same as input
			int length = 49;
			bool expected = false;
			setLength(input, &length);
			// test, input should equal length because 50 is inside of the requirement
			// so expected should turn to true
			if (input == length) {
				expected = true;
			}
			Assert::AreEqual(true, expected);
		}
		
		TEST_METHOD(set_the_width_test1)
		{
			// this is testing the set width function 
			int input = 0;
			// setting to a number that is not the same as input
			int width = 1;
			bool expected = false;
			setWidth(input, &width);
			// test, input should equal width because 50 is inside of the requirement
			// so expect should stay false
			if (input == width) {
				expected = true;
			}
			Assert::AreEqual(false, expected);
		}
		TEST_METHOD(set_the_width_test2)
		{
			// this is testing the set width function 
			int input = 100;
			// setting to a number that is not the same as input
			int width = 99;
			bool expected = false;
			setWidth(input, &width);
			// test, input should not equal width because 100 is outside of the requirement
			// so expected should stay false
			if (input == width) {
				expected = true;
			}
			Assert::AreEqual(false, expected);
		}
		TEST_METHOD(set_the_width_test3)
		{
			// this is testing the set width function 
			int input = 50;
			// setting to a number that is not the same as input
			int width = 49;
			bool expected = false;
			setWidth(input, &width);
			// test, input should equal width becauee 50 is inside of the requirement
			// so expect should turn into true
			if (input == width) {
				expected = true;
			}
			Assert::AreEqual(true, expected);
		}
	};
}
