#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define Repr(e, b, i) for(int i = e; i >= b; i--)
#define rep(n, i) Rep(0, n-1, i)
#define repr(n, i) Repr(n-1, 0, i)
#define all(v) (v).begin(), (v).end()
#define pb(v) push_back(v)
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define bitcnt(x) __builtin_popcount(x)
#define fst first
#define snd second
#define Pqaz(T) priority_queue<T,vector<T>,greater<T>>
#define Pqza(T) priority_queue<T>
#define put(x) cout << x;
#define puts(x) cout << x << ' ';
#define putln(x) cout << x << endl;
#define ENJYU std::ios::sync_with_stdio(false);std::cin.tie(0);

typedef long long ll;
typedef pair<ll, ll> llP;
typedef pair<int, int> intP;

//vector の中身を出力
template <class T>ostream &operator<<(ostream &o,const vector<T>&v)
{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}

int p[4] = {1000, 100, 10, 1};
string q[4] = {"m", "c", "x", "i"};

void solve(void){
	int N;
	cin >> N;
	map <char, int> mp;
	mp['m'] = 1000;
	mp['c'] = 100;
	mp['x'] = 10;
	mp['i'] = 1;

	while (N--) {
		string s1, s2;
		cin >> s1 >> s2;
		int n1 = 0, n2 = 0, tmp = 1;
		for (char c : s1) {
			if ('0' <= c && c <= '9') {
				tmp = c - '0';
				continue;
			}
			n1 += mp[c] * tmp;
			tmp = 1;
		}
		for (char c : s2) {
			if ('0' <= c && c <= '9') {
				tmp = c - '0';
				continue;
			}
			n2 += mp[c] * tmp;
			tmp = 1;
		}
		int n = n1 + n2;
		string ans = "";
		rep(4, i) {
			if (n / p[i]) ans += (n / p[i] == 1 ? "" : to_string(n / p[i])) + q[i];
			n %= p[i];
		}
		putln(ans);
	}
}

int main(void){
	solve();
	//cout << "yui(*-v・)yui" << endl;
	return 0;
}

