#include <iostream>
using namespace std;

int main(){
   double x;
   int year,month,day;
   cin>>x;

   year = x / 365;
   month  = (x - (year*365))/30;
   day = x - ((year*365)+(month*30));

   cout<<year<<" years"<<endl;
   cout<<month<<" months"<<endl;
   cout<<day<<" days"<<endl;
}
