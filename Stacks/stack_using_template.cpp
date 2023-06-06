#include <iostream>
using namespace std;
template <typename T>
class StackUsingArray{

 // creating array dynamically to take user input later
    int* data;
    int nextIndex;
    int capacity;

public:

    StackUsingArray( ){
        data = new T[4];
        nextIndex = 0;
        capacity = 4;
    }

// return the total number of elements 
int size(){
    return nextIndex;
}

bool isEmpty(){

    return nextIndex == 0;

}

//Insert an element
void push(T element){
    if ( nextIndex == capacity ){

        int *newData = new T[2*capacity];  //new array dynamically
         for(int i=0; i<= capacity; i++){
            newData[i] = data[i];
         }

         capacity *= 2;
         delete[] data;
         data = newData;
         }
    
        data [ nextIndex ] = element;
        nextIndex++; 
    }

// delete an element
T pop(){

    if(isEmpty()){
        cout << " Stack is Empty " << endl;
        return 0;
    }
    nextIndex--;
    return data[nextIndex];
    
}

T top(){
    if(isEmpty()){
        cout << " Stack is Empty " << endl;
        return 0;
        }
        
    return data[ nextIndex - 1];
}

};

int main(){

    //creating object
    StackUsingArray <int> s;

    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);
    

    cout << s.top()<<endl;
    cout << s.pop()<<endl;
    cout << s.pop()<<endl;
    cout << s.pop()<<endl;
    cout << s.size()<<endl;
    cout << s.isEmpty()<<endl;

}