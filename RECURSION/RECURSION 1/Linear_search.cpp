#include <iostream>
using namespace std;
bool linearSearch(int arr[ ], int size , int k){
    if(size == 0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr+1, size -1, k);
        return remainingPart;
    }


}

int main(){
    int arr[5] = {2,8,12,6,7};
    int size = 5;
    int k = 12;

    bool ans = linearSearch(arr, size, k);
    if(ans){
        cout << k << " : is Present"<< endl;
    }else{
        cout << k << ": is Absent"<< endl;
    }

    return 0;

}