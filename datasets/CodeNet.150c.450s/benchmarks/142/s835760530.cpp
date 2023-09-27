#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,x,n) for(ll i=x;i<n;i++) 
#define S(v) sort(v.begin(),v.end());


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    cin>>n>>k;
    vector<ll> v(n);
    loop(i,0,n)cin>>v[i];
    loop(i,k,n){
        if(v[i] > v[i-k])cout<<"Yes";
        else cout<<"No";
        cout<<"\n";
    }
    
    

}