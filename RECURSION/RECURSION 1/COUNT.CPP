#include <iostream>
using namespace std;

int count(int n){
    //Base case (kaha rukna hai)
    if(n == 0){
        return 0;
    }
    
    //
    cout << n << endl;
    count(n-1);
}



int main(){
    cout << "Enter a number to start counting:"<<endl;
    int n;
    cin>> n;
    count(n);
}