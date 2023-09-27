#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

//Nayeem Shahriar Joy,Applied Physics And Electronic Engineering,University of Rajshahi.

int main(void)

{
    unsigned long long int n,i,ans=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        ans=(ans*i);
    }
    cout<<ans<<endl;
}