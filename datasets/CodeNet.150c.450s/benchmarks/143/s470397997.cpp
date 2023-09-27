#include<bits/stdc++.h>
using namespace std ;
#define f(i,s,n) for(int i=s;i<n;i++)
const int MAXN = 2e5+5 ;
typedef long long ll ;
// ll arr[MAXN] ;
map<int,int> countz ;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0) ;
    int n;cin>>n ;
    ll sum = 0 ;
    f(i,0,n)
    {
        int x;cin>>x ;
        sum+=x ;
        countz[x]++ ;
    }
    int q;cin>>q ;
    while(q--)
    {
        ll b,c;cin>>b>>c;
        sum-=countz[b]*b ;
        sum+=countz[b]*c ;
        countz[c]+=countz[b] ;
        countz[b] = 0 ;
        cout<<sum<<"\n" ;
    }
}