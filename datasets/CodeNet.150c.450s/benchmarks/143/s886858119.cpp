#include<bits/stdc++.h>
using namespace std;
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define ALL(A) A.begin(),A.end()
#define RALL(A) A.rbegin(),A.rend()
typedef long long ll;
typedef pair<ll,ll> P;
const ll mod=1000000007;
const ll LINF=1LL<<60;
const int INF=1<<30;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
ll copy(ll x){return x;}
int main(){
	ll n;cin>>n;
	vector<ll> a(100005,0);
	ll ans = 0;	
	for(int i = 0; i < n; i++) {
		ll x;cin>>x;
		a[x]++;
		ans += x;
	}
	int q;cin>>q;
	for(int i = 0; i < q; i++) {
		ll b,c;cin>>b>>c;
		ll x = a[b];
		ans += a[b] * c;
		ans -= a[b] * b;
		a[c] += x;
		a[b] = 0;
		cout << ans << endl;
	}
	return 0;
}