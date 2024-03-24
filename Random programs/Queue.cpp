#include<iostream>
using namespace std;
#define n 5
class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"Queue is full"<<endl;
            return;
        }
        back++;
        arr[back]=x;

        if(front==-1){
            front++;
        }
    }
    int pop(){
        if(back!=-1 && front<=back){
            front++;
           
            return arr[front];  
        }
        else{
            cout<<"No Element to pop"<<endl;
        }
        cout<<"poped"<<endl;
        return -1;
    }
    int peek(){
       if(back!=-1 && front<=back){
            return arr[front];
        } 
        else{
            cout<<"No Element to peek"<<endl;
        }
        return -1;
    }
    
};
int main(){
        queue na;
       na.push(23);
       na.push(24);
       na.push(25);
       na.push(26);
       na.push(27);
       cout<<na.peek()<<"->";
        na.pop();
        cout<<na.peek()<<"->";
        na.pop();
        cout<<na.peek()<<"->";
        na.pop();
        cout<<na.peek()<<"->";
        na.pop();
         cout<<na.peek();
        
        
        
        
}