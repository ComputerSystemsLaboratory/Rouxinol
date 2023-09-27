#include<bits/stdc++.h>
#include<string.h>
#define pb push_back
#define all(v) v.rbegin(),v.rend()
#define see(x) cout<<#x<<" : "<<(x)<<endl;
#define ya cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff first
#define sc second
#define pi 3.14159265359
typedef long long ll;
using namespace std;
ll a[480007];
ll po(ll n)
{
    return n*n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
//    freopen("test.txt","r",stdin);
    ll n,m,d,k,i,j,ans1=0,ans2=0;
    cin>>n;
    for(i=1;i<=200;i++)
       for(j=1;j<=200;j++)
            for(k=1;k<=200;k++)
       {
           d=po(i+j)+po(j+k)+po(k+i);
           a[d/2]++;
       }
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}

