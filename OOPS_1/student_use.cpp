#include <iostream>
using namespace std;
#include "student.cpp"


int main() {

Student s1 ; //Creating objects statically
Student s2;
Student s3 ,s4, s5; 

Student *s6 = new Student;  //creating objects dynamically
Student *s7 = new Student;  
Student *s8 = new Student;  

cout <<s1.age << endl;

s2.age = 21;
s3.age = 22;
s4.rollno = 1064;

(*s6).age = 26;
(*s7).age = 27;


s8 -> age = 29;
s8 -> rollno = 1050;


cout << s2.age << endl;
cout << s3.age << endl;
cout << s4.rollno << endl;

cout << s6 -> age << endl;
cout << s7 -> age << endl;
cout << s8 -> age << endl;
cout << s8 -> rollno << endl;


}