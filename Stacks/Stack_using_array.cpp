#include <climits>
class StackUsingArray{

 // creating array dynamically to take user input later
    int* data;
    int nextIndex;
    int capacity;

public:
    
    //constructor
    StackUsingArray(int totalSize){
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

// return the total number of elements 
int size(){
    return nextIndex;
}

bool isEmpty(){

    return nextIndex == 0;

    /*
    if(nextIndex == 0){
        return true;
    }
    else{
        return false;
    }
    */
}

//Insert an element
void push(int element){
    if ( nextIndex == capacity ){
        cout << " Stack is Full " << endl;
        return;
    }
    data [ nextIndex ] = element;
    nextIndex++; }

// delete an element
int pop(){

    if(isEmpty()){
        cout << " Stack is Empty " << endl;
        return INT_MIN;
    }
    nextIndex--;
    return data[nextIndex];
    
}

int top(){
    if(isEmpty()){
        cout << " Stack is Empty " << endl;
        return INT_MIN;
        }
        
    return data[ nextIndex - 1];
}

};