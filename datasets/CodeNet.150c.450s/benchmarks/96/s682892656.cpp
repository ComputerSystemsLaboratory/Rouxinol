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
#include <unordered_map>
#include <unordered_set>
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
template<typename T1,typename T2> inline void print2(T1 a, T2 b){cout << a << " " << b << endl;}
template<typename T1,typename T2,typename T3> inline void print3(T1 a, T2 b, T3 c){
	cout << a << " " << b << " " << c << endl;
}
const int mod = 1e9 + 7;
//const int mod = 998244353;

int main(){
    ll t; cin >> t;
    vector<string> s(10);
    s[1] = ".,!? ";
    s[2] = "abc";
    s[3] = "def";
    s[4] = "ghi";
    s[5] = "jkl";
    s[6] = "mno";
    s[7] = "pqrs";
    s[8] = "tuv";
    s[9] = "wxyz";
    while(t--){
        string a; cin >> a;
        ll now = -1;
        ll id = 0;
        ll n = a.size();
        rep(i,n){
            ll u = a[i] - '0';
            if(u == 0){
                if(now != -1) cout << s[now][id];
                now = -1;
                continue;
            }
            if(now != u){
                now = u;
                id = 0;
            }else{
                id = (id + 1) % s[now].size();
            }
        }
        cout << endl;
    }
}
