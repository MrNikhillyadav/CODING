class Student {

    public :
    int age;
    const int rollnumber ;   // yahi initialize krna compulsory hai.
    int &x;

    Student(int r, int age) :  rollnumber(r), age(age), x(this ->age ) {
        
       // rollnumber = r;

    }


    void print(){
        cout << "rollnumber : "<< rollnumber << endl;
        cout << "age : "<< " "<< age << endl;
        cout << "&x: "<< " "<< x << endl;
         }
};