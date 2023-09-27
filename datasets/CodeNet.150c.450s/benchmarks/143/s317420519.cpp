#include <bits/stdc++.h>
#define boost_io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define num(a) a-'0'
#define maxself(a,b) if(b>a)a=b
#define minself(a,b) if(b<a)a=b;
#define debug(x) cout<<#x<<":"<<x<<" "
#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define vl vector<long long int>
#define v vector
#define p pair
#define pb push_back
#define mk make_pair
#define f first
#define s second
#define ln "\n"	
typedef long long int ll;
typedef long double ld;
typedef double d;
using namespace std;
ll modF=1e9+7;
ll INF=1e18;

void solve(){
	int n;
	cin>>n;
	vi a(n);
	unordered_map<int,int> mp;
	ll sum=0;
	rep(i,0,n){
		cin>>a[i];
		sum+=a[i];
		if(mp.find(a[i])==mp.end()){
			mp[a[i]]=0;
		}
		mp[a[i]]++;
	}
	int q;
	cin>>q;
	rep(i,0,q){
		int b,c;
		cin>>b>>c;
		if(mp.find(c)==mp.end()){
			mp[c]=0;
		}
		sum+=(c-b)*mp[b];
		mp[c]+=mp[b];
		mp[b]=0;
		cout<<sum<<ln;
	}
}

int main(){
	boost_io;
	solve();
	return 0;
}