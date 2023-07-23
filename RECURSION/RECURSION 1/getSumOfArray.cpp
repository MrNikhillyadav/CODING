#include <iostream>
using namespace std;

int  getSum(int*arr,int size){

    //Base case
    if(size == 0){
        return 0;
    }
    if(size ==1){
        return arr[0];
    }
    
    //recursive call
    int remainingPart= getSum(arr+1, size -1);

    //small work
    return arr[0] + remainingPart;

}

int main(){
    int arr[5] = {2,5,3,4,6};
    int size =5;

    int sum = getSum(arr, size);
    cout << "Sum :"<<sum << endl;

    return 0;
}
