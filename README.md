# refactored-winner

Develop a C++ program that can create a students record. (Name, Age, Student ID
and credits):
Create a base class and header file called person.
Base class (Person.cpp):
• Create a Person constructor for the person class that takes in the parameters
of the name (string) of the student and the age (int) of the student.
• use the this pointer to retrieve the objects name and age hidden by its local
variable.
• Create a person destructor; it does nothing.
• Make sure to include all the C++ standard library protocols and include any
calls to a different file or class in the same program.
Header File (Person.h):
• Create all the public and private class members that are needed for the
person class. Remember that the public class members are available to
everyone in the program, and the private class members are accessed within
the same class.
• In the private class members do the following:
- Declare the name as the string

- Declare the age as an int
• In the public class members do the following:
- Declare a person constructor with the name (string) and age (int) as
parameters
- Create a virtual Person destructor
- Create accessors for getting the name function as a string and return the
name back to the user. Remember the const. (An accessor provides a
direct way to change or just access private variables).
- Also, by following the same step above, do the same for the age but
accessing a const integer getAge function and return the age to the user.
- Create a virtual string that calls the string function from the student.cpp
file and equal it to 0.
- Make sure to include all the C++ standard library protocols and include
any calls to a different file or class in the same program.

Base header file (Student.h) inherited from Person
After the Person class is done then, Create a base class and header file called
Student.
Student.h (Header file):
• Remember to include “Person.h”.

• Create a student class and a derived from the public person class (class
Student : public Person)
• Create all the public and private class members that are needed for the
person class. Remember that the public class members are available to
everyone in the program, and the private class members are accessed within
the same class.
• In the private class members do the following:
- Declare the studentID as the int
- Declare the credits as an int
• In the public class members do the following:
- Declare a Student constructor that accesses all the needed information as
parameters, this will include from the person class too. As parameters
include: name (string), age (int), studentID (int) and credits (int).
- Same as the person class, create accessors for getting the studentID
function as an int and return the name back to the user. Remember the
const.
- Do the same step above for the credits.
- Create a virtual string that calls the string function (getAsString).

Student class (Student.cpp):
• Create a Student constructor for the Student class that takes in all the
parameters that are explained above (name, age, studentID, and credits)
• use the this pointer to retrieve the objects name and age hidden by its local
variable.
• Create a Student destructor; it does nothing.
• Finally, create a string for getting all the information from all the classes and
header files. This will be called getAsString() function.
This will return:
- The name of the student and it will get the name from the person class.
- The age of the student and it will get the age from the person class
- The StudentID of the student and it will get the ID number from the
student class
- The credits of the student and it will get the credits number from the
student class
- Remember to print all this in separate lines, use the “\n”, just to make it
clearly understandable.

• Make sure to include all the C++ standard library protocols and include any
calls to a different file or class in the same program.

The output should look something like this.

EXPECTED OUTPUT:

Adnaan Chida
87
Name: Adnaan Chida
Age: 19
Student ID: 1619138
Credits: 87
Press any key to continue . . .
