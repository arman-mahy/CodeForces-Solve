#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int x,months,years,days;

    years = n/365;

    x = n-(365*years);

    months = x/30;

    days = x-(months*30);

    cout<<years<<" years"<<endl;
	cout<<months<<" months"<<endl;
	cout<<days<<" days"<<endl;

}
