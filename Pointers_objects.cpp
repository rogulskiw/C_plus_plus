#include <iostream>
using namespace std;

class Student {
public:
    string name;
    string surname;
    string year;
    int group;
    int registerNum;
    string dateOfBirth;
    void showData() {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Year: " << year << endl;
        cout << "Group: " << group << endl;
        cout << "Number in register: " << registerNum << endl;
        cout << "Date of birth: " << dateOfBirth << endl;
    }

};

int main() {

    // Declaration of pointer variable 
    Student* p_student;

    // Utworzenie obiektu typu Pracownik (instancji klasy Pracownik) wskazywanego przez wskaźnik w_pracownik:
    p_student = new Student();

    // Nadanie wartości zmiennym członkowskim utworzonego obiektu:
    p_student->name = "George";
    p_student->surname = "Runner";
    p_student->year = "3b";
    p_student->group = 2;
    p_student->registerNum = 22;
    p_student->dateOfBirth = "23.05.1999";


    // Displaying data
    p_student->showData();

    // Removing object form dynamic allocation :
    delete p_student;
    return 0;

}