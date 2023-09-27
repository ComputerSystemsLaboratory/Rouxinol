#include <iostream>

using namespace std;
long long luythua (long long n,long long x)
{
    if (x==0) return 1;
    if (x==1) return n;
    else
    {
        long long tam=luythua(n,x/2)%1000000007;
        if(x % 2 == 0)
            return ((tam*tam))%1000000007;
        else
            return (((tam*tam)%1000000007)* n)%1000000007;
    }
}

int main()
{
    long long n,x;
    cin>>n>>x;
    cout<<luythua(n,x)%1000000007;
    cout<<'\n';
}
    
