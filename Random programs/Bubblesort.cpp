//Bubble sort in desc

#include<iostream>
using namespace std;

int main(){
	int arr[]={12,23,43,56,332,45,67,43,19};
	int len=sizeof(arr)-sizeof(arr[0]);
	len=9;
	for(int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(arr[i]<arr[j])
			swap(arr[i],arr[j]);
		}
	}
    for(int i=0;i<len;i++){
		cout<<arr[i]<<endl;
	}
	
}
