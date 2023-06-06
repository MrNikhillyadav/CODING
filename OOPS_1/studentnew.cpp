class Student {

    private:
    int age;

    public :
    int rollno;

    public :

    //Default Constructor
    Student(){
        cout << "Default Constructor Called !" << endl;
    }

    // Parameterised Constructor
     Student( int rollno){
        cout << "this: "<< this << endl;
        cout << "Constructor 2 called!"<<endl;
        rollno = rollno;
     }
    // Parameterised Constructor
     Student( int r, int a){
        cout << "this: "<< this << endl;
        cout << "Constructor 3 called!"<<endl;
        rollno = r;
        age = a;
     }

     //Default Destructor
     ~ Student () {
        cout <<"Destructor called !"<<endl;
     }



    
    void display() {
        cout << rollno << " " << age << endl;
    }

    int getAge(){
        return age;
    }

    void setAge (int a, int password){   // Setting password for protection
        if (password != 123){
        return;
        }
        if (a<0){
        return;
        }
        age = a;
    }
    
    
};