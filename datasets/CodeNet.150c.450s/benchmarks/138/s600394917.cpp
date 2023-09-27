#include<bits/stdc++.h>

using namespace std;
int gcd(int a, int b)
{
    int c=min(a,b),d=max(a,b);
    if  (a==0 || b==0) return d;
    else return gcd(c, d%c);
}

int main()
{

    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}