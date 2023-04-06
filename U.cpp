#include<iostream>

using namespace std;

int main(){
    double x;
    cin>>x;

    int intpart = (int)x;
    double decipart = x - intpart;

    if(decipart==0 ){
        cout<<"int "<<intpart<<endl;
    }
    else{
        cout<<"float "<<intpart<<" "<<decipart<<endl;
    }
   

}