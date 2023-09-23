#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int m,int n)
{
    if(n==0)
        return m;
    
    return gcd(n ,m%n);
}

int lcm(int m,int n)
{
    return ((m/gcd(m,n))*n);
}

int main()
{
    int m,n;
    
    while(cin>>m>>n){
        cout<<gcd(m,n)<<" "<<lcm(m,n)<<endl;
    }
    
    return 0;
}