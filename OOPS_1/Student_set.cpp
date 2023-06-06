#include <iostream>
using namespace std;
#include "Studentnew.cpp"

int main (){

        Student s1;
        Student *s2 = new Student;

        s1.setAge(20,123);
        s2-> setAge(30,123);

        s1.display();
        s2->display();

}