
//program to find all pairs of number in an array of Interger that add upto specific given number;

#include<iostream>
using namespace std;
int main(){
	int numbers[]={1,2,32,38,21,20,40,20,42,0,12,32,1,45,67,86,66,56,45,44,90,56,34,53,55,78,90,4,34,56,23};
	int len=sizeof(numbers)/sizeof(numbers[0]);
	int sefnum;
	cout<<"enter the specific number: ";
	cin>>sefnum;

	for(int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(numbers[i]+numbers[j]==sefnum){
				cout<<numbers[i]<<","<<numbers[j]<<endl;
			}
		}
	}
}
