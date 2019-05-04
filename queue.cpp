// write a menu driven prgram that implements the following operatio on linked list 
// 1. insert new element in the beginning end in between the list
// 2. deleting an existing element
// 3. search an element
// display all the nodes
// Circular linked list

#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class list{
    private:
        node *head, *tail;
    public:
        list(){
            head = NULL;
            tail = NULL;
        }
    void createNode(int val){
        node *temp = new node;
        temp->data = val;
        temp->next = NULL;
        if(head==NULL){
            head = temp;
            tail = temp;
            temp = NULL;
        } else{
            tail->next=temp;
            tail=temp;
        }
    }

    void display(){
        node *temp = new node;
        temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    // void pushStart(int val){
    //     node *temp = new node;
    //     temp->data=val;
    //     temp->next=head;
    //     head = temp;
    // }

    void pushEnd(int val){
        node *temp = new node;
        temp->data=val;
        temp->next=NULL;
        tail->next=temp;
        tail=temp;
    }

    void deleteElement(){
        head=head->next;
        // node *prev = new node;
        // node *current = new node;
        // current=head;
        // for(int i = 0;i<pos-1;i++){
        //     current = current->next;
        // }
        // prev->next=current->next;
    }
};

int main(){
    list link;
    link.createNode(4);
    link.pushEnd(1);
    link.pushEnd(2);
    link.display();
    link.deleteElement();
    link.display();
}