#include <iostream>
using namespace std;
#include "Studentnew.cpp"

int main(){

/*
     Student s1;           // Default constructor.
     Student s2(1064);     // Constructor 2 called.
     Student s3(10,1064);  // Constructor 3 called.
     Student s4(s1);       // copy constructor.
     Student s5 = s1;      // copy constructor.
     s2 = s1;              // copy assignment operator.

*/


     /*
     Student s1(10,20);
     cout <<"s1 : ";
     s1.display();

     //using copy constructor

     Student s2(s1); 
     cout << "s2 : ";
     s2.display();

     Student *s3 = new Student(50,60);
     cout << "s3 : ";
     s3 -> display();

     Student s4(*s3); 
     cout << "s4 : ";
     s4.display();

     Student *s5 = new Student(*s3);
     cout << "s5 : ";
     s3 -> display();

     */




     /*
     Student s1(10,20);
     Student s2(30,40);
     Student s3;          // default constructor will run.

     s3 = s1;            // copy constructor call.
     cout << "s3: ";
     s3.display();

     Student *s4 = new Student(s1);
     cout << "s4 : ";
     s4 -> display();

     */
     




     
     Student s1(10,20);
     Student s2(30,40);
     Student *s3 = new Student(50,60);

     s2 = s1;
     *s3 = s1;
     s2 = *s3;

     delete s3; // manually calling the default destructor for dynamically allocated object.

     

}