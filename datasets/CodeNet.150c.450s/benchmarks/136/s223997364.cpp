#include <iostream>

using namespace std;

long long GCD(long long a,long long b)
{
    long long  gcd;
    if(b==0)
        gcd=a;
    else
        gcd=GCD(b,a%b);
    return gcd;
    
}
long long LCM(long long a,long long b)
{
    return a*b/GCD(a, b);
}


int main() {
    
    long long a,b;
    while(cin>>a>>b)
    {
        cout<<GCD(a,b)<<" "<<LCM(a, b)<<endl;
    }
    return 0;
}