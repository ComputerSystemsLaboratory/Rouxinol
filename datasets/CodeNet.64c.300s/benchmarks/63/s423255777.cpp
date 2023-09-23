#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;

long long gcd(long long n1, long long n2)
{
    if(n1<n2) gcd(n2,n1);
    else if(n2==0) return n1;
    else
    {
        return gcd(n2,n1%n2);
    }
}

int main()
{
    long long mGCD,mLCM;
    long long n1,n2;
    while(cin>>n1>>n2)
    {
        mGCD=gcd(n1,n2);
        mLCM=(n1/mGCD)*n2;
        cout<<mGCD<<" "<<mLCM<<endl;
    }

    return 0;
}