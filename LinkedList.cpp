#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next = NULL;
    }

    //destructor 
    ~Node(){
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void InsertHead(Node* &Head,int data){
    Node* temp = new Node(data);
    temp->next = Head;
    Head = temp;
}

void InsertTail(Node* &Tail, int data){
    Node* temp = new Node(data);
    Tail->next = temp;
    Tail = temp;
}


void InsertPosition(Node* &Head , Node* &Tail , int position , int data){

    //if we want to insert an element at first position.
    if(position == 1){
        InsertHead(Head,data);
        return;
    }

    //if we want to insert an element anywhere in the middle then we will traverse to that position(actually just before the actual position) then change to corresponding addresses.
    Node* temp = Head;        //we will traverse with the help of temp which initialized to head position.

    int count = 1;
    while(count < position-1){          //after termination of this while loop temp will be just before the actual position , so now we can play with this temp to change the positions.
        temp = temp->next;
        count++;
    }

    //if we want to insert at last position then we will check if the temp is at last position or not.
    if(temp->next == NULL){
        InsertTail(Tail,data);
        return;
    }


    Node* toBeInserted = new Node(data);
    toBeInserted->next = temp->next;
    temp->next = toBeInserted;


}


void deletePosition(Node* &Head , Node* Tail , int position){
    //if we want to delete the 1st then we just shifted the head to next position.
    if(position == 1){
        Node* temp=Head;
        Head = Head->next;
        temp->next=NULL;
        delete temp;
        return;
    }


    //IF we want to delete any middle position then we are taking two pointers 'prev' and 'curr'
    int count=1;
    Node* curr = Head;
    Node* prev = NULL;

    while(count < position){
        prev = curr;
        curr = curr->next;
        count++;
    }


    prev->next = curr->next;
    curr->next=NULL;
    delete curr;

}


void print(Node* &Head){
    Node* temp = Head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1=new Node(10);
    // cout<<n->data<<endl;
    // cout<<n->next<<endl;
    Node* head = node1;
    Node* tail = node1;
    print(head);
    // InsertHead(head , 8);
    // InsertHead(head , 42);
    InsertTail(tail , 8);
    InsertTail(tail , 27);
    print(head);
    InsertPosition(head,tail,1,87);
    print(head);
    deletePosition(head,tail,4);
    print(head);
    cout<<"Tail : "<<tail->data;

    return 0;
}