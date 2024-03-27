// Object Oriented Programming
// HW2-4
// C111044 김호성

#include <iostream>
#include <string>
using namespace std;

#include "Employee.h"

Employee::Employee() {

}
Employee::Employee(string name, int age, string depart, string phone) {
	e_name = name;
	e_age = age;
	e_depart = depart;
	e_phone = phone;
}

string Employee::getName() {
	return e_name;
}
int Employee::getAge() {
	return e_age;
}
string Employee::getDepart() {
	return e_depart;
}
string Employee::getPhone() {
	return e_phone;
}

void Employee::setName(string name) {
	e_name = name;
}
void Employee::setAge(int age) {
	e_age = age;
}
void Employee::setDepart(string depart) {
	e_depart = depart;
}
void Employee::setPhone(string phone) {
	e_phone = phone;
}

void Employee::printEmp() {
	cout << "이름 : " << e_name << ", 나이 : " << e_age << ", 부서 : " << e_depart << ", 전화번호 : " << e_phone << endl;
}

Employee::~Employee() {

}