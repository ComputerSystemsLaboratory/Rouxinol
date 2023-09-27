#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    IOS;
    //freopen("inputfile.txt","r",stdin);
    ll n;cin>>n;
    map <ll,ll> ma;
    //map <int,int>::iterator it;
    ll msum = 0;
    for(ll i=0;i<n;i++)
    {
        ll x;cin>>x;
        msum+=x;
        ma[x]++;
    }
    ll t;cin>>t;
    while(t--){
    ll v,val;cin>>v>>val;

    ma[val]+=ma[v];
    msum += (val-v)*ma[v];
    ma[v] = 0;
    cout<<msum<<endl;
    }
   return 0;
}

