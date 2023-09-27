#include <cmath>
#include <cstdio>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <stack>
#include <fstream>
#include <queue>
#include <iomanip>
#include <iterator>
#include <map>
#include <unordered_map>
#include <set>
#include <assert.h>
#include <numeric>
#define fast ios_base::sync_with_stdio(false)
#define mxn (ll)(1e5+5)
#define mod (ll)(1e9+7)
#define mod1 (ll)(998244353)
#define ll long long int
#define ld long double
#define vi vector<ll>
#define vvi vector<vi >
#define pi pair<ll,ll>
#define vvpi vector<vector<pi > >
#define vpi vector<pi >
#define vppi vector<pair<ll,pi > >
#define vs vector<string>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define eb emplace_back
#define mkp make_pair
#define fs first
#define se second
#define crz(v,n) v.clear(),v.resize(n+1,0)
#define print(v) for(ll it=0;it<v.size();it++) cout<<v[it]<<" ";cout<<endl
#define printp(v) for(ll it=0;it<v.size();it++) cout<<v[it].first<<" "<<v[it].second<<endl
using namespace std;
int main(){fast;
	int n,i,x;ll s=0;cin>>n;
	map<int,int>mp;for(i=0;i<n;i++) cin>>x,mp[x]++,s+=x;
	int q;cin>>q;while(q--){
		int b,c;cin>>b>>c;
		s+=1LL*mp[b]*(c-b);cout<<s<<endl;
		mp[c]+=mp[b],mp[b]=0;
	}
}
