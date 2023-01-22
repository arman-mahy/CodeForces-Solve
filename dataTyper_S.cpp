#include<iostream>
using namespace std;

int main(){
	float n;
	cin>>n;
	
	if(n>=0 && n<=25.000 ){
		cout<<"Interval "<<"[0,25]"<<endl;
	}
	else if(n>=25.000 && n<=50.000 ){
		cout<<"Interval "<<"(25,50]"<<endl;
	}
	else if(n>=50.000 && n<=75.000 ){
		cout<<"Interval "<<"(50,75]"<<endl;
	}
	else if(n>=75.000 && n<=100.000 ){
		cout<<"Interval "<<"(75,100]"<<endl;
	}
	else{
		cout<<"Out of Intervals";
	}
	
}
