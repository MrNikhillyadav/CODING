#include <iostream>
using namespace std;
#include "studentnew.cpp"


int main() {

Student s1 ; 
Student s3 ,s4; 

Student *s6 = new Student;  

cout << "s1 age : " << s1.getAge() << endl;       //to access private property i.e. age 

s1.display();                                     // to print age and roll no.


cout << "s3 age : " << s1.getAge() << endl;
s3.display();

cout << "s4 age : " << s4.getAge() << endl;
s4.display();

cout << "s6 age : " << s6 -> getAge() << endl;
(*s6).display();


}