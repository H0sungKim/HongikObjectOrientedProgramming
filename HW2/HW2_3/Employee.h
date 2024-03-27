// Object Oriented Programming
// HW2-3
// C111044 김호성

#ifndef Employee_h
#define Employee_h
#include <string>

using namespace std;

class Employee {
private:
	string e_name;
	int e_age;
	string e_depart;
	string e_phone;
public:
	Employee();
	Employee(string name, int age, string depart, string phone);

	string getName();
	int getAge();
	string getDepart();
	string getPhone();
	
	void setName(string name);
	void setAge(int age);
	void setDepart(string depart);
	void setPhone(string phone);

	void printEmp();

	~Employee();
};


#endif