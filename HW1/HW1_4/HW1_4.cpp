// Object Oriented Programming
// HW1-4
// C111044 김호성

#include <iostream>
#include<string>
using namespace std;

string convertToHexadecimal(int decimal) {
	string result = "";
	char hexadecimal[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	while (decimal) {
		result = hexadecimal[decimal % 16] + result;
		decimal = decimal / 16;
	}
	if (result == "") {
		result = "0";
	}
	return result;
}

int main() {
	int num;

	cout << "십진수를 입력하시오 : ";
	cin >> num;

	cout << "17의 16진수는 " << convertToHexadecimal(num);

	return 0;
}