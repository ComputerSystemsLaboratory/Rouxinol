#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
#define all(x) x.begin(),x.end()
#define rep(i,j,n) for (long long i = j; i < (long long)(n); i++)
#define _GLIBCXX_DEBUG
const ll MOD = 1000000007;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//(a+b-1)/b
//priority_queue<ll, vector<ll>, greater<ll>> q;

signed main(){
	//cout << fixed << setprecision(10);
	ll n,m,l; cin>>n>>m>>l;
	vvl a(n,vl(m));
	vvl b(m,vl(l));
	vvl ans(n,vl(l));
	rep(i,0,n)rep(j,0,m)cin>>a[i][j];
	rep(i,0,m)rep(j,0,l)cin>>b[i][j];
	rep(i,0,n){
		rep(j,0,l){
			ll cnt=0;
			rep(k,0,m)cnt+=a[i][k]*b[k][j];
			ans[i][j]=cnt;
		}
	}
	rep(i,0,n){
		rep(j,0,l){
			cout<<ans[i][j];
			if(j!=l-1)cout<<" ";
		}
		cout<< endl;
	}



	return 0;
}
