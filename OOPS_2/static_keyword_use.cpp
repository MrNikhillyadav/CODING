#include <iostream>
using namespace std;

class Student {
    public :

    int age = 0;
    int rollno = 0;

    static int totalstudents;   //Total no. of students present.

    Student(){
        totalstudents++;
    } 

    int getRollnumber(){
        return rollno ;
    }
    
    static int getTotalStudents(){
         return totalstudents ;
    }



};


int Student :: totalstudents = 0;   //initialize static data members.


int main(){
    Student s1;
    Student s2;
    
     //cout << "totalstudents : "<< Student :: totalstudents << endl;   // result 2

     
     cout << "totalstudents : "<< Student :: getTotalStudents << endl;  
     




    /*

    Student s1;
    cout << "s1 age: " << s1.age << "  " << "s1 roll no: " << s1.rollno << endl;
    cout << "s1 total students: "<< s1.totalstudents << endl;

    s1.totalstudents = 80;
    Student s2;
    cout << "s2 total students: "<< s2.totalstudents << endl;

    cout << "totalstudents : "<< Student :: totalstudents << endl;  
*/

}