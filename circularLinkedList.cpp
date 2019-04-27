#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class list{
    private:
        node *head, *tail, *prevTail;
        int length = 0;
    public:
        list(){
            head = NULL;
            tail = NULL;
        }
    void createNode(int val){
        node *temp = new node;
        node *tempforprev= new node;
        temp->data = val;
        temp->next = head;
        if(head==NULL){
            head = temp;
            tail = temp;
            prevTail = temp;
            temp = NULL;
        } else{
            tail->next=temp;
            tail=temp;
        }
        length++;
    }

    void display(){
        node *temp = new node;
        temp=head;
        int count=0;
        // while(temp->next!=head){
        //     length++;
        // }
        // while(count!=length){
        //     cout<<temp->data<<" ";
        //     temp=temp->next;
        // }
        while(count<12){
            cout<<temp->data<<" ";
            temp=temp->next;
            count++;
        }
        cout<<endl;
    }

    void pushStart(int val){
        node *temp = new node;
        // node *tempforprev= new node;
        temp->data=val;
        temp->next=head;
        head = temp;
        // tempforprev=head;
        // length++;
    }

    void popEnd(){
        // node *tempforprev= new node;
        // tempforprev=head;
        // // tail=prevTail;
        // for(int i=0;i<length-1;i++){
        //     tempforprev=tempforprev->next;
        //     prevTail = tempforprev;
        // }
        // length--;
        // prevTail->next=head;
        // tail = prevTail;
        // tempforprev=head;
        // for(int i=0;i<length-2;i++){
        //     tempforprev=tempforprev->next;
        //     prevTail=tempforprev;
        // }
        // node *tempforprev =new node;
        // tempforprev=head;
        // for(int i=0;i<length-2;i++){
        //     tempforprev=tempforprev->next;
        //     cout<<prevTail->data;
        // }
        head=head->next;
        tail->next=head;
    }

    void pushInBetween(int pos, int val){
        node *pre = new node;
        node *cur = new node;
        node *temp = new node;
        cur = head;
        for(int i =0;i<pos-1;i++){
            pre=cur;
            cur=cur->next;
        }
        temp->data=val;
        pre->next = temp;
        temp->next=cur;
    }

    void deleteElement(int pos){
        node *prev = new node;
        node *current = new node;
        current=head;
        for(int i = 0;i<pos-1;i++){
            prev = current;
            current = current->next;
        }
        prev->next=current->next;
    }
};

int main(){
    list link;
    link.createNode(4);
    link.createNode(5);
    link.createNode(3);
    link.createNode(2);
    // link.pushStart(5);
    // link.pushStart(3);
    // link.pushStart(2);
    // link.pushInBetween(2, 7);
    link.display();
    link.popEnd();
    link.display();
}