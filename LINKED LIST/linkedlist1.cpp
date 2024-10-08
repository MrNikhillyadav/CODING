
#include <iostream>
using namespace std;
#include "Node.cpp"

 void print(Node *head){

//   iterating over the linked list
    Node *temp = head;
    while(temp != NULL){
        cout<< temp -> data << " ";
       temp = temp -> next ;
    }
}

int main() {


Node n1(1);
Node *head = &n1;
Node n2 (2);
head -> next = &n2;

/*
    Dynamically
    Node *n3 = new Node(3);
    Node *head = n3;

    Node *n4 = new Node(4);
    n3 -> next = n4;

*/

Node n3 (3);
Node n4 (4);
Node n5 (5);

n1.next = &n2;
n2.next = &n3;
n3.next = &n4;
n4.next = &n5;


print(head);


/*
    Node n1(1);        //Statically
    Node *head = &n1;
    Node n2(2);

    n1.next = &n2;
    cout << head->data  << endl;

*/


return 0;


}