#include <iostream>
using namespace std;
void bubbleSort(int *arr, int n){
    //base case
    if(n ==0 || n==1){
        return ;
    }
    // small work
    for(int i=0; i< n-1; i++){
        if(arr[i]> arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    //recursive call
    return bubbleSort(arr, n -1 );

}
   
int main(){
    int arr[6] = {50,82,78,96,18,54};
    int n = 6;
    
    bubbleSort(arr, n);

// to print the original array which is now sorted
    for(int i=0; i< n; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}

// 1. void vs int use in Bubblesort();
// original array me change krna hai to void function baneyenge and pass by reference krenge.