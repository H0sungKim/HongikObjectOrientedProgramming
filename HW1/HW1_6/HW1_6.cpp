// Object Oriented Programming
// HW1-6
// C111044 김호성

#include <iostream>
using namespace std;

int count_words(const char* str) {
	int count = 0;
	int flag = 0;
	for (const char* i=str; *i!='\0'; i++) {
		if (*i == ' ') {
			if (flag) {
				count++;
			}
			flag = 0;
		} else {
			flag = 1;
		}
	}
	return count+flag;
}

int count_sentences(const char* str) {
	int count = 0;
	int flag = 0;
	for (const char* i=str; *i!='\0'; i++) {
		if (*i >= 'A' && *i <= 'Z') {
			if (flag == 0) {
				flag = 1;
			}
		} else if (*i >= 'a' && *i <= 'z') {
			if (flag == 0) {
				flag = -1;
			}
		} else if (*i == '.') {
			if (flag == 1) {
				count++;
			}
			flag = 0;
		}
	}
	return count;
}

int main() {
	const char* str1 = "Object-oriented programming is a programming paradigm based on the concept of objects, which may contain data, in the form of fields, often known as attributes; and code, in the form of procedures, often known as methods. A feature of objects is that an object's procedures can access and often modify the data fields of the object with which they are associated. In OOP, computer programs are designed by making them out of objects that interact with one another. There is significant diversity of OOP languages, but the most popular ones are class-based, meaning that objects are instances of classes, which typically also determine their type.";
	const char* str2 = "melon, apple, grape, kiwi, pear, orange";
	const char* str3 = " ";

	cout << "첫 번째 문자열에 포함된 단어 수 : " << count_words(str1) << endl;
	cout << "두 번째 문자열에 포함된 단어 수 : " << count_words(str2) << endl;
	cout << "세 번째 문자열에 포함된 단어 수 : " << count_words(str3) << endl << endl;

	cout << "첫 번째 문자열에 포함된 문장 수 : " << count_sentences(str1) << endl;
	cout << "두 번째 문자열에 포함된 문장 수 : " << count_sentences(str2) << endl;
	cout << "세 번째 문자열에 포함된 문장 수 : " << count_sentences(str3) << endl;
}