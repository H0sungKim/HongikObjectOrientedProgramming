// Object Oriented Programming
// HW2-1
// C111044 김호성

#include <iostream>
#include <cmath>
using namespace std;

#include "Rect.h"

Rect::Rect() {
	p1_x = 0;
	p2_x = 1;
	p1_y = 0;
	p2_y = 1;
}

Rect::Rect(float x1, float x2, float y1, float y2) {
	p1_x = x1;
	p2_x = x2;
	p1_y = y1;
	p2_y = y2;
}

float Rect::get_area() {
	return abs(p1_x - p2_x) * abs(p1_y - p2_y);
}
float Rect::get_diagonal_length() {
	return sqrt(pow(p1_x - p2_x, 2) + pow(p1_y - p2_y, 2));
}