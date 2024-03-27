// Object Oriented Programming
// HW2-1
// C111044 김호성

#ifndef Rect_h
#define Rect_h
#include <cmath>

class Rect {
private :
	float p1_x, p2_x, p1_y, p2_y;
public :
	Rect();
	Rect(float x1, float x2, float y1, float y2);
	float get_area();
	float get_diagonal_length();
};
#endif