#include <iostream>
using namespace std;
#include <cstring>

class Student{
  int age;

  public:
  char *name;

  Student (int age, char *name){
    this -> age = age;           //Shallow copy
   // this -> name = name; 

//deep copy
   this -> name = new char[strlen(name) + 1];
   strcpy( this -> name , name);
    
  }

  //copy constructor
  Student (Student const &s){
    this -> age = s.age;
    //this -> name = s.name;

    //deep copy
    this -> name = new char[strlen(name) + 1];
    strcpy(this -> name , s.name);

  }

  void display(){
    cout << name <<" "<< age << endl;
  }
};









int main(){
    char name[] = "Nick" ;
    Student s1(21, name);
    s1.display();


   /* name[3] = 'e';
    Student s2(30, name);
    s2.display();
    */

   //copy
   Student s2(s1);   

   s2.name[0] = 'D';
   s1.display();
   s2.display();

}