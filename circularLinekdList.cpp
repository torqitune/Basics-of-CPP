//In circular list we don't need a head pointer as the list is circular , so we can just use a tail pointer and access every element.
//In circular list we can't insert an element at head , so we specify the element where we want to insert an element.
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        if(this->next != NULL)
            delete next;
            next = NULL;
    }
};


void InsertNode(Node* &tail , int element , int data){
    //we here are considering that element is present in our list

    //if list is null , i.e no element is there in it.
    if(tail == NULL){
        Node* toBeInserted = new Node(data);
        tail = toBeInserted;
        toBeInserted->next = toBeInserted;
    }
    //our element is in the list
    else{
        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }
        //after this while loop , our current will be pointing to our element.
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}



void print(Node* &tail){
    if(tail == NULL){
        cout<<"**Empty listed**"<<endl;
    }
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}


void deleteNode(Node* &tail, int value){
    //check if the list is empty
    if(tail == NULL){
        cout<<"\nEmpty list."<<endl;
    }
    //else list contains the element to be deleted
    else{
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        //if only 1 node is there , then all tail , curr , prev will be pointing to that single node only
        if(curr == prev)
            tail = NULL;

        else if(tail == curr)
            tail = prev;
        curr->next = NULL;
        delete curr;
    }

}


int main(){
    Node* tail = NULL;
    InsertNode(tail,77,1);
    InsertNode(tail,1,5);
    // InsertNode(tail,5,3);
    // InsertNode(tail,3,7);
    // InsertNode(tail,5,2);
    // InsertNode(tail,1,8);
    // InsertNode(tail,7,19);
    print(tail);
    deleteNode(tail,5);
    print(tail);
    return 0;
}