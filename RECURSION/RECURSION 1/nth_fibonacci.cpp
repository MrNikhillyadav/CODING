#include <iostream>
using namespace std;

   int fibonacci(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // Recurrence relation for Fibonacci
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    cout << "Enter nth fibonacci number you want :"<<endl;
    
    cin>> n;

    int result = fibonacci(n);
    cout << result <<endl;
    }