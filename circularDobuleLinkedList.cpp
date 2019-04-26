#include <iostream>
using namespace std;

typedef struct node{
    int data;
    struct node *next;
    struct node * prev;
}node;

node * CreateNode(){
    node * p=(node *)malloc(sizeof(node));
p->next=NULL;
p->prev=NULL;

return p;


}
void insertNode(node *p){
node * q=new node();
int data;

cout<<"Enter Data ";
cin>>data;
q->data=data;

q->next=p->next;

p->next=q;

q->prev=p;

if(q->next!=NULL){
    q->next->prev=q;
}

}
void makeCircular(node *p){
    node *temp=CreateNode();
    temp=p;
    while(temp->next!=NULL){
       
    temp=temp->next;        
    }
    
    temp->next=p;
    p->prev=temp;
    cout<<"\ncircular complete LInked List Created\n"<<endl;
    
}

void Cdisplay(node * p,int n){
    node * temp=CreateNode();
    temp = p;
    cout<<"\n data in list repeated "<<n<<" times:: "<<endl;
   while(n>=0){
      
   
    while(p->prev!=temp){
        cout<<p->data<<"\t";
        p=p->next;
    }
            cout<<p->data<<"\t";
            p=p->next;
            n--;
   }
}



int main(){
node * p=CreateNode();
p->data=0;
for(int i = 0; i <5; i++)
{
    insertNode(p);
}



makeCircular(p);
Cdisplay(p,2);

    return 0;
}