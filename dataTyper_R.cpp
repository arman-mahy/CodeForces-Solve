#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int year,month,days;
	
	month = n/30;
	year = (n/365);
	month = month-(12*year);
	days = n-((year*365)+(month*30)); 
	
	cout<<year<<" years"<<endl;
	cout<<month<<" months"<<endl;
	cout<<days<<" days"<<endl;
}
