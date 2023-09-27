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
#define MOD 1000000007
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//(a+b-1)/b
//priority_queue<ll, vector<ll>, greater<ll>> q;
using pl = pair<ll,ll>;
signed main(){
	ll n; cin>>n;
	vl ans(n+10);
	rep(i,1,n){
		rep(j,1,n){
			rep(k,1,n){
				ll m=i*i+j*j+k*k+i*j+i*k+j*k;
				if(n<m)break;
				ans[m]++;
			}
		}
		
	}
	rep(i,1,n+1){
		cout<<ans[i]<<endl;
	}

	return 0;
}