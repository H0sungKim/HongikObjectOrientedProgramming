// Object Oriented Programming
// HW2-1
// C111044 김호성

#include <iostream>
#include "Rect.h"
using namespace std;

int main() {
	float x1, x2, y1, y2;

	cout << "2개의 좌표정보 x1, x2, y1, y2를 입력하세요. >> ";
	cin >> x1 >> x2 >> y1 >> y2;

	Rect rect1 = Rect(x1, x2, y1, y2);

	cout << "직사각형의 넓이는 " << rect1.get_area() << "입니다." << endl;
	cout << "직사각형의 내부 대각선 길이는 " << rect1.get_diagonal_length() << "입니다." << endl;

	return 0;
}