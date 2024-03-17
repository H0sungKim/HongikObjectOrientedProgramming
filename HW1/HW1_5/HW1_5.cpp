// Object Oriented Programming
// HW1-5
// C111044 김호성

#include <iostream>
using namespace std;

int main() {
	int a[7][7] = {
		{  77,  28,  31, 392, 224,  84, 161},
		{  60,  84,  53, 476,  32, 255,   7},
		{ 515, 147,  76, 455,  12, 243,  21},
		{   9, 224, 141, 287,  56,  42, 441},
		{  87, 161, 142, 224,   8,   9, 231},
		{ 243,  21,  23,  35, 111,  87, 357},
		{ 255,   7,  90,  70,  63, 224, 147}
	};
	char b[7][7];

	for (int i=0; i<7; i++) {
		for (int j=0; j<7; j++) {
			if (a[i][j] % 7 == 0) {
				b[i][j] = '@';
			} else {
				b[i][j] = ' ';
			}
		}
	}
	for (int i=0; i<7; i++) {
		for (int j=0; j<7; j++) {
			cout << b[i][j];
		}
		cout << endl;
	}
}