#include <iostream>
using namespace std;

int main(){
   double a, b, c,temp,a2,b2,c2;
   cin>>a>>b>>c;
   a2=a;
   b2=b;
   c2=c;

   if(a>b){
    temp =a ;
    a = b;
    b = temp;
   }

   if(a>c){
    temp =a;
    a = c;
    c = temp;
   }

   if(b>c){
    temp = b;
    b = c;
    c = temp;
   }

   cout<<a<<endl;
   cout<<b<<endl;
   cout<<c<<endl;

   cout<<endl;

   cout<<a2<<endl;
   cout<<b2<<endl;
   cout<<c2<<endl;



}
