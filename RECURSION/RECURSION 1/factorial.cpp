#include <iostream>
using namespace std;


int factorial(int n){
    if(n ==0){
        return 1;
    }
    if(n<0){
        return 0;
    }

    //small work
   int ans = n * factorial(n-1);
   return ans;

}

int main(){
    int n;
    cout << "Enter  any number :"<< endl;
    cin>>n;

   int result = factorial(n);
   cout << "Result :"<< result;
}

