#include<iostream>
using namespace std;
int main(){
	int arr[]={12,32,32,45,66,76,76,78};

	for(int i=0;i<8/2;i++){
		for(int j=8;j>i;j--){
		  swap(arr[j],arr[i]);	
		}
	}
		for(int i=0;i<8;i++){
		cout<<arr[i]<<endl;
	}
	
}
