#include <iostream>
using namespace std;
void selectionSort(int *arr, int size, int s, int e){
    // base case
   if(s >= e){
    return ;
   }

   // small work
    int minIndex = s;
        for(int i = s+1; i <= e; i++){
            if(arr[i] < arr[minIndex]){
                minIndex = i;
            }
        }
        swap ( arr[s],arr[minIndex]);
        
    //Recursive call
    selectionSort(arr,size,s+1,e);

}
int main(){
    int arr[6]= {9,8,4,2,7,6};
    int size =6;

    selectionSort(arr, size,0,5);
    for(int i=0; i< size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}