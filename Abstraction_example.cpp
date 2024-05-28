#include <iostream>
using namespace std;

// Definition of abstract base class:
class Person {
    private:
    // Declaration of member fields :
        string name;
        string surname;
    public:
        virtual void showData() = 0;
        // Prototype of abstract method
        void setName(string nam){
            name = nam;
        }
        string getName(){
            return name;
        };
        void setSurname(string surnam){
            surname = surnam;
        }
        string getSurname(){
            return surname;
        };
    };

// Derived class definition:
class Employee : public Person {
    protected:
    string position;
    // Definition of abstract method declared in base abstract Class:
    public:
    void showData() {
        cout << getName() << " " << getSurname() << ", " << getPosition() << endl;
    };
    void setPosition(string pos){
            position = pos;
        };
    string getPosition(){
            return position;
        };

};

// Definition of derived Class Student:
class Student : public Person {
    protected:
    string year;
    public:
    void showData() {
        cout << getName() << " " <<getSurname() << ", " << getClass() << endl;
    };
    void setClass(string a){
            year = a;
        };
    string getClass(){
            return year;
        };
};

int main() {
// Creating object employee as a derived Class from Employee:
Employee employee;
// Setting the values of member fields:
employee.setName("John");
employee.setSurname("Hammer");
employee.setPosition("footballer");
cout << "EMPLOYEE INFO:" << endl;

employee.showData();

Student student;

// Creating a new object
student.setName("Jenny");
student.setSurname("Smiling");
student.setClass("6C");
cout << "STUDENT INFO:" << endl;

student.showData();
return 0;

}