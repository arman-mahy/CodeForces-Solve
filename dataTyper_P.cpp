#include<iostream>
using namespace std;

int main(){
	long long a,first;
	cin>>a;
	
	first = a;
	if(first >= 999){
		first = first / 1000;
}

	if(first%2==0){
		cout<<"EVEN";
	}
	else{
		cout<<"ODD";
	}
	
}
