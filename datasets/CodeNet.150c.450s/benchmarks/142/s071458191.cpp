#pragma GCC optimize(2)
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+7;
#define IOS ios::sync_with_stdio(0)
#define ull unsigned ll
#define uint unsigned
#define pai pair<int,int>
#define pal pair<ll,ll>
#define IT iterator
#define pb push_back
#define fi first
#define se second
#define For(i,j,k) for (int i=(int)(j);i<=(int)(k);++i)
#define Rep(i,j,k) for (int i=(int)(j);i>=(int)(k);--i)
#define endl '\n'
#define ll long long
ll a[N],n,k;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=k+1;i<=n;i++)
    {
        if(a[i]>a[i-k])
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
