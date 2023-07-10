#include <bits/stdc++.h>
using namespace std;

class Node{
public:
  int data;
  Node* Next;


//constructor
  Node(int data)
  {
    this->data=data;
    this->Next=NULL;
  }

};

void insertAthead(Node* &head,int data) //To make a update on original linked list we pass the reference (Node* &head) instead of the head .
{
    //create new node
    Node* temp= new Node(data); //pointer of new node is in null. 
    temp->Next=head; //pointer of new node is in head. 
    head=temp; //head changed
}

void insertAtTail(Node* &tail, int data)
{
    //create new node
    Node* temp= new Node(data);
    tail->Next=temp;
    tail=temp;

}

void insertAtpos(Node* &head, int pos, int data)
{

    Node* temp= new Node(data);
    temp->Next=(head+pos);
    if(pos>1)
       (head+pos-2)->Next=temp;
    else 
       insertAthead(head,data);
}
void print(Node* head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        cout << temp->data << endl;
        temp= temp->Next;
    }
    cout<<endl;
}
int main()
{
    Node* node1= new Node(10); //created a new node

    //print the data and pointer
    cout<< node1 -> data <<endl;
    cout<< node1 ->Next <<endl;

    //assign head
    Node* head=node1;
    Node* tail=node1;

    //insert data at head
    //for(int i=0;i<20;i++)
  //      insertAthead(head,i);
   // cout<<endl;

    //insert data at tail
   for(int i=20;i<40;i++)
       insertAtTail(tail,i);
   cout<<endl;

  //  cout<< head -> data <<endl;
    insertAtpos(head,20,-1);

    //print the linked list
    print(head);

    return 0;
}