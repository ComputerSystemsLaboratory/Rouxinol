/*
		@Author :- Gaurav Bharti
		National Institute of Technology, Jamshedpur.
*/
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define empb emplace_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define vpii vector<pii>
#define mapii map<int,int> 
#define mapll map<ll,ll>
#define all(a) a.begin(),a.end()
#define test ll t; cin>>t; while(t--)
#define prec(n) fixed<<setprecision(n)
#define jaldibazi ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
const int N=1e5+10;


int main(){
	jaldibazi;

    int n; cin>>n;
    map<ll,ll> m;
    ll ans=0;
    for(int i=0; i<n; ++i){
        ll a;cin>>a;
        ans+=a;
        m[a]++;
    }
 
    int q; cin>>q;
    for (int i=0; i<q;++i){
        ll b,c; cin>>b>>c;
        ans+=(c-b)*m[b];
        m[c]+=m[b];
        m[b]=0;
        cout<<ans<<endl;
    }

    return 0;
}