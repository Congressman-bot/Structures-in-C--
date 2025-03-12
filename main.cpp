// Program to illustrate the use of structures in C++
//Written by Alex Mwangi Software Engineering 1.2
#include <iostream>
#include <string>

using namespace std;

// Creating a structure named Patient
struct Patient{
	string name;
	int age;
	string diagnosis;
};

// Creating a function named displayPatient to display the details
void displayPatient(Patient const &p){
	cout<<"Name: "<<p.name<<endl;
	cout<<"Age: "<<p.age<<endl;
	cout<<"Diagnosis: "<<p.diagnosis<<endl<<endl;
}

int main(){
	// Declaring the variables
	Patient p1, p2;
	
	// Prompting the user to enter patient1's details
	cout<<"Enter patient1's name: "<<endl;
	getline(cin, p1.name);
	cout<<"Enter patient1's age: "<<endl;
	cin>>p1.age;
	cin.ignore();
	cout<<"Enter patient1's diagnosis: "<<endl;
	getline(cin, p1.diagnosis);
	
	// Prompting the user to enter patient2's details
	cout<<"Enter patient2's name: "<<endl;
	getline(cin, p2.name);
	cout<<"Enter patient2's age: "<<endl;
	cin>>p2.age;
	cin.ignore();
	cout<<"Enter patient2's diagnosis: "<<endl;
	getline(cin, p2.diagnosis);
	
	// Calling the function to display the details
	displayPatient(p1);
	displayPatient(p2);
	
	return 0;
}
// End of program