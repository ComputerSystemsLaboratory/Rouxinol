#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<deque>
#include<set>
#include<map>
#define REP(i, N) for(ll i = 0; i < N; ++i)
#define FOR(i, a, b) for(ll i = a; i < b; ++i)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define INF 1000000000
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int qx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int qy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

string tos(ll n, ll l) {
	string res = "";
	if(n == 0) {
		REP(i, l) {
			res += "0";
		}
		return res;
	} else {
		ll m = n;
		ll cnt = 0;
		while(m > 0) {
			res = to_string(m % 10) + res;
			++cnt;
			m /= 10;
		}
		REP(i, l - cnt) {
			res = "0" + res;
		}
		return res;
	}
}

int main(void) {
	while(true) {
		ll a, l;
		cin>>a>>l;
		map<ll, ll> s;
		if(a == 0 && l == 0) break;
		s[a] = 0;
		ll cnt = 1;
		while(true) {
			string hoge = tos(a, l);
			sort(ALL(hoge), greater<char>());
			ll ma = stoi(hoge);
			sort(ALL(hoge));
			ll mi = stoi(hoge);
			a = ma - mi;
			if(s.count(a) != 0) {
				cout<<s[a]<<" "<<a<<" "<<cnt - s[a]<<endl;
				break;
			}
			s[a] = cnt;
			++cnt;
		}
	}
}