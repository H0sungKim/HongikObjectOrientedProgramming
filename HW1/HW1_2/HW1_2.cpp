// Object Oriented Programming
// HW1-2
// C111044 김호성

#include <iostream>
using namespace std;

int main() {
	int num;

	cout << "하나의 정수를 입력하시오 : ";
	cin >> num;

	if (num < 2) {
		cout << num << "은(는) 소수가 아닙니다." << endl;
		return 0;
	}

	for (int i=2; i<num; i++) {
		if (num % i == 0) {
			cout << num << "은(는) 소수가 아닙니다." << endl;
			return 0;
		}
	}
	cout << num << "은(는) 소수입니다." << endl;

	return 0;
}