#include <iostream>
using namespace std;

class Employee {
    public:
    virtual void returnData();
};

class Teacher: public Employee {
    public:
    void returnData();
};

class FormTeacher: public Teacher {
    public:
    void returnData();
};

void Employee::returnData() {
    cout << "Method returnData() defined in class Employee"<< endl;
}

void Teacher::returnData() {
    cout << "Method returnData() defined in class Teacher"<< endl;
}

void FormTeacher::returnData() {
    cout << "Method returnData() defined in class FormTeacher" << endl;
}

int main() {

Employee *p_employee;
p_employee = new Employee;// dynamic memory allocation
p_employee->returnData();
delete p_employee; //deleting dynamic object before ending the porgramme


Teacher *p_employee2;
p_employee2 = new Teacher;
p_employee2->returnData();
delete p_employee2;

FormTeacher *p_employee3;
p_employee3 = new FormTeacher;
p_employee3->returnData();
delete p_employee3;

return 0;

}