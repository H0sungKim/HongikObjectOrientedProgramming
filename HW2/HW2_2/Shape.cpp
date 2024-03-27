// Object Oriented Programming
// HW2-2
// C111044 김호성

#include <iostream>
using namespace std;

#include "Shape.h"

Shape::Shape() {

}
Shape::Shape(int segment) {
	num1 = segment;
	num2 = 1;
	num3 = 1;
}
Shape::Shape(int width, int length) {
	num1 = width;
	num2 = length;
	num3 = 1;
}
Shape::Shape(int width, int length, int height) {
	num1 = width;
	num2 = length;
	num3 = height;
}

int Shape::spec() {
	return (num1 * num2 * num3);
}