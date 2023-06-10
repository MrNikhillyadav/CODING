
#include <iostream>
using namespace std;

template <typename T>
class DynamicQueue{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    DynamicQueue(int s){
        data = new T[s];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = s;

    }
    int getSize(){
        return size;
    }
   
   bool isEmpty(){
    return size==0;
   }

   //insert element

   void enqueue(T element){       // NOTE:The return type is void ! !!!!
    if (size == capacity){
       // cout << "Queue is full" << endl;
       // return;
       T* newData = new T[2*capacity];


       // Copy the data from the old array to the new array
        int j = 0;
        for (int i = firstIndex; i < capacity; i++){
            newData[j] = data[i];
            j++;
            }


            for(int i=0; i<firstIndex; i++){
                newData[j] = data[i];
                j++;
            }

    // Delete the old array
        delete[] data;
        data = newData;

                
                firstIndex=0;
                nextIndex = capacity;
                capacity = 2*capacity;

    }
    data[nextIndex]= element;
   // nextIndex++;  //

    // we must know capacity already for this
   nextIndex = (nextIndex+1)%capacity;
   if(firstIndex == -1){
    firstIndex=0;
   }
             size++;
   }



   T front(){
    if(isEmpty()){
        cout << "Queue is empty" << endl;
        return 0;
    }
    return data[firstIndex];
   }

   T dequeue(){

    if(isEmpty()){
        cout << "Queue is empty" << endl;
        return 0;
   }

 // storing the first Index data in local variable to return it later.
   T ans = data[firstIndex];   
   firstIndex= (firstIndex + 1)% capacity;
   size--;

 // Not compulsory but it is better to reset it to these values.
   if(size ==0){                
    firstIndex = -1;
    nextIndex = 0;
   }
   return ans;
   }

};



int main(){
    DynamicQueue<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    cout <<q.front()<< endl;
    cout <<q.dequeue()<< endl;
    cout <<q.dequeue()<< endl;
    cout <<q.dequeue()<< endl;
    cout <<q.getSize()<< endl;
    cout <<q.isEmpty()<< endl;

    return 0;
}

