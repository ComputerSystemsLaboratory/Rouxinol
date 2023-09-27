#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>
#include <functional>
#include <bitset>
#include <assert.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef pair<ll,ll> P;
typedef vector<P> vpl;
typedef tuple<ll,ll,ll> tapu;
#define rep(i,n) for(ll i=0; i<(n); i++)
#define REP(i,a,b) for(int i=(a); i<(b); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int inf = 1<<30;
const ll linf = 1LL<<62;
const int MAX = 510000;
ll dy[8] = {0,1,0,-1,1,-1,1,-1};
ll dx[8] = {1,0,-1,0,1,-1,-1,1};
const double pi = acos(-1);
const double eps = 1e-7;
template<typename T1,typename T2> inline bool chmin(T1 &a,T2 b){
	if(a>b){
		a = b; return true;
	}
	else return false;
}
template<typename T1,typename T2> inline bool chmax(T1 &a,T2 b){
	if(a<b){
		a = b; return true;
	}
	else return false;
}
template<typename T1,typename T2> inline void print2(T1 a, T2 b){cout << a << " " << b << "\n";}
template<typename T1,typename T2,typename T3> inline void print3(T1 a, T2 b, T3 c){
	cout << a << " " << b << " " << c << "\n";
}
const int mod = 1e9 + 7;
//const int mod = 998244353;

int calc(string s, map<char,int> mp){
	ll res = 0;
	rep(i,s.size()){
		if('2'<=s[i]&&s[i]<='9'){
			res += (s[i]-'0')*mp[s[i+1]];
			i++;
		}else{
			res += mp[s[i]];
		}
	}
	return res;
}

int main(){
	map<char,int> mp;
	mp['m'] = 1000; mp['c'] = 100; mp['x'] = 10; mp['i'] = 1;
	string mcxi = "mcxi";
	ll q; cin >> q;
	while(q--){
		string s,t; cin >> s >> t;
		ll ret = calc(s,mp) + calc(t,mp);
		ll now = 1000;
		string ans;
		rep(i,4){
			if(ret / now >= 2){
				ans.push_back((char)(ret/now+'0'));
				ans.push_back(mcxi[i]);
			}
			else if(ret / now == 1) ans.push_back(mcxi[i]);
			ret = ret % now;
			if(ret == 0) break;
			now /= 10;
		}
		cout << ans << endl;
	}
}
