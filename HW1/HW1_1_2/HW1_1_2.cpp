// Object Oriented Programming
// HW1-1 2) C-Style String
// C111044 김호성

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int repeat = 5;
	char id[100];
	char password[100];

	cout << "프로그램을 종료하려면 아이디와 비밀번호를 입력하세요." << endl;

	for (int i = 0; i < repeat; i++) {
		cout << "아이디 >> ";
		cin.getline(id, 100, '\n');
		cout << "비밀번호 >> ";
		cin.getline(password, 100, '\n');

		if (strcmp(id, "OOP") == 0 && strcmp(password, "C++") == 0) {
			cout << "성공! 프로그램을 정상 종료합니다." << endl;
			return 0;
		}
		else {
			cout << "아이디 또는 비밀번호가 틀립니다~~" << endl;
			if (i != repeat - 1) {
				cout << "다시 시도하세요." << endl;
			}
		}
	}
	cout << "실패! 5번 틀렸습니다. 프로그램을 종료합니다." << endl;
}