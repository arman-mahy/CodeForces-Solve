#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a,b,c,flr,cel,rnd;
    cin>>a>>b;
    
    c=a/b;
    flr = floor(c);
    cel = ceil(c);
    rnd = round(c);
    
    cout<<"floor "<<a<<" / "<<b<<" = "<<flr<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<cel<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<rnd<<endl;
}
