// Adnaan Chida

#include<iostream>
#include"Student.h"


int main()
{
	Student s1("Adnaan Chida", 19, 1619138, 87);

	std::cout << s1.getName() << "\n";
	std::cout << s1.getCredits() << "\n";
	std::cout << s1.getAsString();

	system("PAUSE");

	return 0;
}