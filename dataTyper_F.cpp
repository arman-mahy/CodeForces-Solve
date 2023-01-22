#include<iostream>
#include <math.h>


using namespace std;
int main()
{
    long long n,m,lastdigit1,lastdigit2;
    cin>>n>>m;
    
    lastdigit1 = n%10;
    lastdigit2 = m%10;
    
    
    cout<<lastdigit1+lastdigit2<<endl;
    
    
}
