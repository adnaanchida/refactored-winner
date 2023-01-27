// Adnaan Chida

#include "Student.h"

Student::Student(string name, int age, int studentID, int credits)
	:Person(name, age)
{
	this->studentID = studentID;
	this->credits = credits;
}

Student::~Student()
{
	// nothing here...
}

string Student::getAsString()
{
	return "Name: " + this->getName() + "\n" + "Age: " + to_string(this->getAge()) + "\n" + "Student ID: " + to_string(this->studentID) + " \n" + "Credits: " + to_string(this->credits) + "\n";
}