#include <iostream>
using namespace std;

// Function to check if the array is sorted in ascending order
bool isSorted(int arr[], int size) {
    // Base case
    if (size <= 1) {
        return true;
    }

    //small work
    if (arr[0] > arr[1]) {
        return false;
    }

    //Recursive call
    return isSorted(arr + 1, size - 1);
}


int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Check if the array is sorted
    bool sorted = isSorted(arr, size);     //ARRAY KA SIZE DENA MUST HAI

    if(sorted){
        cout << "Sorted array" <<endl;
    }else{
        cout <<"Unsorted array" <<endl;
    };
}
