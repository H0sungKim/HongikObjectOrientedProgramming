// Object Oriented Programming
// HW2-3
// C111044 김호성

#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    Employee* empList = new Employee[4];

    empList[0].setName("김철수");
    empList[0].setAge(23);
    empList[0].setDepart("인사팀");
    empList[0].setPhone("010-2342-1453");

    empList[1].setName("정연우");
    empList[1].setAge(31);
    empList[1].setDepart("연구계획팀");
    empList[1].setPhone("010-4231-1241");

    empList[2].setName("박지운");
    empList[2].setAge(35);
    empList[2].setDepart("인사팀");
    empList[2].setPhone("010-3421-6894");

    empList[3].setName("최지우");
    empList[3].setAge(26);
    empList[3].setDepart("영업1팀");
    empList[3].setPhone("010-9653-3532");

    for (int i=0; i<4; i++) {
        empList[i].printEmp();
    }

    delete [] empList;

    return 0;
}

