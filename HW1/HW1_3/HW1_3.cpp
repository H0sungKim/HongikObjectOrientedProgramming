// Object Oriented Programming
// HW1-3
// C111044 김호성

#include <iostream>
using namespace std;

int getGCD(int num1, int num2) {
	while (num2) {
		int temp = num1 % num2;
		num1 = num2;
		num2 = temp;
	}
	return num1;
}

int main() {
	int num1;
	int num2;
	int gcd;

	cout << "두 수를 입력하시오 : ";
	cin >> num1 >> num2;

	gcd = getGCD(num1, num2);

	cout << "두 수의 공약수 : ";
	for (int i=1; i<=gcd; i++) {
		if (gcd % i == 0) {
			cout << i << " ";
		}
	}
	cout << endl << "최소공배수 : " << num1*num2/gcd << endl;

	return 0;
}