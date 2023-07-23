#include <iostream>
using namespace std;
bool binarySearch(int* arr, int s, int e, int k){
    // element not found
    if(s>e){
        return false;
    }
    
    int mid = s+(e-s)/2;
    
    // element found
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid] < k){
        return binarySearch(arr, mid+1,e,k);
    }
    else {
        return binarySearch(arr,s,mid -1,k);
    }

}

int main(){
    int arr[6] = {10,30,32,68,72,96};
    int size =6;
    int k =72;

    bool ans =  binarySearch(arr,0,5,k);

   cout<< "Present or not: ----> " << ans;
    
    return 0;
}