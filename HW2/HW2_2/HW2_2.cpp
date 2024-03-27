// Object Oriented Programming
// HW2-2
// C111044 김호성

#include <iostream>
#include "Shape.h"
using namespace std;

int main() {
    int a1, a2, a3;
    Shape s1;

    while (true) {
        cout << "1개~3개의 숫자를 입력하세요. >> ";

        cin >> a1;
        if (a1 > 0) {
            if (cin.peek() == '\n') {
                s1 = Shape(a1);
                break;
            }
        } else {
            cout << "양의 정수를 입력해주세요." << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cin >> a2;
        if (a2 > 0) {
            if (cin.peek() == '\n') {
                s1 = Shape(a1, a2);
                break;
            }
        } else {
            cout << "양의 정수를 입력해주세요." << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cin >> a3;
        if (a3 > 0) {
            s1 = Shape(a1, a2, a3);
            break;
        } else {
            cout << "양의 정수를 입력해주세요." << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
    }
    cout << s1.spec() << endl;

    return 0;
}