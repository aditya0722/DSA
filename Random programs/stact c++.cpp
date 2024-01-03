#include<iostream>
#define SIZE 5  
using namespace std;
void pop();
void push();
void travesr();
int top=-1,inp_array[SIZE];
int main(){
	string  option="y";
	int choice;
	while(option =="Y"||option=="y"){
		cout<<"Enter the option: "<<endl;
        cout<<"1.push an Element: "<<endl;
		cout<<"2.pop an Element: "<<endl;

		cout<<"3.Travers: "<<endl;
		cout<<"4.Exit: "<<endl;
		cin>>choice;
	
		if(choice==1){
			push();
		}
		else if(choice==2){
			pop();
		}
		else if(choice==3){
			travesr();
		}
		else if(choice==4){
			option="N";
		}
	}
}
void push(){
	int x;
	if(top==SIZE-1){
		cout<<"stack is full"<<endl;
	}
	else{
		cout<<"enter the element: "<<endl;
		cin>>x;
		inp_array[top+1]=x;
		top++;
	}
	
}
void pop(){
	if(top==-1){
		cout<<"stack has no element "<<endl;
	}
	else{
		cout<<"element poped: "<<inp_array[top]<<endl;
		top=top-1;
	}
	
}
void travesr(){
	if(top==-1){
		cout<<"stack has no element "<<endl;
	}
	else{
		cout<<"elements are: "<<endl;
		for(int i=top;i>=0;i--){
			cout<<inp_array[i]<<endl;
		}
	}
}
