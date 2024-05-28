/*Application consists two numerical ID fields and strings with name of a person. Access to these fields is private. Extended classes do not have access to these fields. Additionally there is static field counting class. 
Also there are three constructors: with no parameters, with two parameteres and copying. 
Each constructor increments number of a class. 

*/

#include <iostream>
using namespace std; 

	class Person {
		private:
			int id; //private access
			string name; //private access
		public:
			static int countClass; //generally accessibble field which counts the number of a class
		Person(){
		id = 0;
		name = "";
		countClass++;}; // constructor with no parametres
		
		Person(int a, string b): id(a), name(b){
		countClass++;}; // constructor with two parametres with ID and name fields
		Person(const Person& copy){
			id = copy.id;
			name = copy.name;
			countClass++;
		}; //copying constructor
		void showData(string username){
			if(name!=""){
			cout << "Hi " << username << " my name is " << name;	
			}
			else {
				cout << "No data";
			}
			
		}; // Method for displaying data
	};
	
	int Person::countClass = 0; //static data has to be defined outside the definiton of the class and definition can be mentioned once in a code.
	
int main(){
	
	int ide; 
	string name;
	cout << "Number of registered users: ";
	cout << Person::countClass << endl;
	Person person; //constructor without parametres
	cout << "User's data:" << endl; // typying user's data
	cout << "Type id: ";
	cin >> ide; 
	cout << "Type name: ";
	cin >> name; 
	
	Person person1(ide,name); // constructor with two parametres
	Person person2 = person1; //copying constructor
	person.showData("John"); //method for specific object
	cout << endl;
	person1.showData("John"); //method for specific object
	cout << endl;
	person2.showData("John"); //method for specific object
	cout << endl;
	
	cout << "Number of registered users: ";
	cout << Person::countClass;

}
