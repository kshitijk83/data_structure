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
        node *head, *tail, *prev;
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

    void pushEnd(int val){
        prev = tail;
        node *temp = new node;
        temp->data=val;
        temp->next=NULL;
        tail->next=temp;
        tail=temp;
    }

    // void popEnd(){
    //     // prev->next=NULL;
    //     // tail=prev;
    //     node *pre = new node;
    //     node *cur = new node;
    //     node *temp = new node;
    //     cur = head;
    //     temp=head;
    //     while(temp!=NULL){
    //         pre=cur;
    //         cur=cur->next;
    //         temp=temp->next;

    //     }
    //     pre->next=NULL;
    //     cout<<pre->data;
    // }

    void popElement(){
        node *prev = new node;
        node *current = new node;
        current=head;
        for(int i = 0;i<4;i++){
            prev = current;
            current = current->next;
        }
        prev->next=current->next;
    }
};

int main(){
    list link;
    link.createNode(4);
    link.pushEnd(1);
    link.pushEnd(2);
    link.pushEnd(3);
    link.pushEnd(4);
    link.display();
    link.popElement();
    link.display();
}