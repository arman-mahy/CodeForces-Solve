#include <iostream>
using namespace std;

int main(){
    long long a, b, c, min,max;
    cin>>a>>b>>c;

    max = a;
    if(b>max){
        max =b;
    }

    if(c>max){
        max =c;
    }

    min = a;
    if(b<min)
    {
        min = b;
    }
    if(c<min){
        min = c;
    }

    cout<<min<<" "<<max<<endl;

}
