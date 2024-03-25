#include<iostream>
using namespace std;
class node{
    public:
   
 node* next;
    int val;
    node(int data){
        val=data;
        next=NULL;
        
    }
};
class queue{
public:
    node* head;
    node* tail;
    queue(){
        head=NULL;
        tail=NULL;
    }
 void enqueue(int data){
    node* n=new node(data);
        if(head==NULL){
            head=n;
            tail=n;
            return;
        }
        tail->next=n;
        tail=n;
   }
   void pop(){
     if(head==NULL){
        cout<<"Queue is empty"<<endl;
        return;
     }
     node* todelete=head;
     head=head->next;
     delete todelete;
   }
   int peek(){
     
    if(head==NULL){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    return head->val;
   }
   bool empty(){
    if(head!=NULL){
        return false;
    }
    return true;
   }


  
};
int main(){
    queue q;
    q.enqueue(23);
    q.enqueue(24);
    q.enqueue(27);
   cout<< q.peek()<<endl;
   q.pop();
    cout<< q.peek()<<endl;
    cout<<q.empty()<<endl;
    return 0;
}