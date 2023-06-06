template <typename T>
class QueueUsingArray{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    QueueUsingArray(int s){
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
        cout << "Queue is full" << endl;
        return;
    }
    data[nextIndex]= element;
   // nextIndex++;  //

   nextIndex = (nextIndex+1)%capacity; // we must know capacity already for this
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

