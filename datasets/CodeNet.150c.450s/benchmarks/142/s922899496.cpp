#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,j,a,b;
    cin>>n>>k;
    long long arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=k;i<n;i++)
    {
        a=arr[i];
        b=arr[i-k];
        if(a>b)cout<<"Yes\n";
        else cout<<"No\n";
    }
    
}