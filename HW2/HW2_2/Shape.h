// Object Oriented Programming
// HW2-2
// C111044 김호성

#ifndef Shape_h
#define Shape_h

class Shape {
private :
	
public :
	int num1, num2, num3;
	Shape();
	Shape(int segment);
	Shape(int width, int length);
	Shape(int width, int length, int height);
	int spec();
};
#endif