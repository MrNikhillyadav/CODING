#include <iostream>
using namespace std;
#include "studentnew.cpp"

int main(){


Student s1;  // Default cosntructor runs
s1.display();

Student s2;        // Default cosntructor runs

Student *s3 = new Student;        // Default cosntructor runs
s3 -> display();

cout << "Parameterised constructor demo !"<<endl;

Student s4(20);          // Parameterised Constructor runs

Student *s5 = new Student(21);
s5 ->display();

cout << "Concept of this ! "<< endl;

Student s6(30);
cout << "Address of s6 : "<< &s6 << endl; 



}