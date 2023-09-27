#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int arr[22222222];
int a[22222222];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        a[arr[i]]++;
    }
    int x;
    cin>>x;
    while(x--)
    {
        int b,c;
        cin>>b>>c;
        ll cur=a[b];
        sum-=cur*b;
        a[b]=0;
        sum+=cur*c;
        a[c]+=cur;
        cout<<sum<<endl;


    }
   return 0;
}
