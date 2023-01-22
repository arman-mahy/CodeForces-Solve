#include<iostream>
using namespace std;

int main(){
	int arr[3];
	
	for(int i=0; i<3; i++){
		cin>>arr[i];
	}
		
	int temp =0;
	int length = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<length; i++){
		for(int j=i+1; j<length; j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(int i=0; i<length; i++){
		cout<<arr[i];
		cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=0; i<3; ++i){
		cout<<arr[i];
		cout<<endl;
	}
	
	
	
}
