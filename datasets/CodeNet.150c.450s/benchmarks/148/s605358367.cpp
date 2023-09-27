#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define pf push_front
#define mp make_pair
#define mod 1000000007
#define vll vector<ll>
#define inf 1e9 +7
#define pll pair<ll,ll>
#define ff first 
#define ss second 
#define PI acos(-1)
#define endl '\n'
using namespace std;
int main()
{
    fastio; 
    ll T=1;
    //cin>>T; 
    ll ff=T;
    while(T--)
    {
    	ll n;
    	cin>>n;
    	string s;
    	map<string , ll> m;
    	for(ll i=0;i<n;i++)
    	{
    		cin>>s;
    		m[s]++;
		}
		cout<<"AC x "<<m["AC"]<<endl;
		cout<<"WA x "<<m["WA"]<<endl;
		cout<<"TLE x "<<m["TLE"]<<endl;
		cout<<"RE x "<<m["RE"]<<endl;
	}
}

