#include <iostream>
using namespace std;

// Definicja klasy Pracownik:
class Employee {
    private:
    // Deklaracje prywatnych zmiennych członkowskich:
        string name, surname, position;
    public:
        void setName(string);
        string getName();
        void setSurname(string);
        string getSurname();
        void setPosition(string);
        string getPosition();
    // Prototypes of overloded method:
    string returnData();
    void returnData(string&, string&, string&);
    };
    
// Definition of returnData method 
string Employee::returnData() {
    return name + " " + surname + ", position: " + position;
    }

void Employee::returnData(string &pName, string &pSurname,string &pPosition) {
    pName = name;
    pSurname = surname;
    pPosition = position;
    }

//Setters and getters definitions
void Employee::setName(string pName){
    name = pName;
}

string Employee::getName(){
    return name;
}

void Employee::setSurname(string pSurname){
    surname = pSurname;
}

string Employee::getSurname(){
    return surname;
}

void Employee::setPosition(string pPosition){
    position = pPosition;
}

string Employee::getPosition(){
    return position;
}
int main() {

// Creating an object
Employee employee;
string name = "John";
string surname = "Worker";
string position = "programmer";
// Nadanie wartości zmiennym członkowskim obiektu pracownik:
employee.setName(name);
employee.setSurname(surname);
employee.setPosition(position);

// Executing overloaded method:
cout << "Employee info: " << employee.returnData() << endl;

string nam, surnam, pos; // additional variables

employee.returnData(nam, surnam, pos);

cout << "Employee info: ";
cout << nam + " " + surnam+ ", position: " + pos << endl;
return 0;

}