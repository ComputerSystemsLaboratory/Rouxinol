#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <climits>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <fstream>

using namespace std;
#define SZ(x) (int)(x).size()
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REPR(i,n) for(int i=(n)-1;i>=0;i--)
#define ALL(s) (s).begin(), (s).end()
#define so(V) sort(ALL(V))
#define rev(V) reverse(ALL(V))
#define uni(v) v.erase( unique(ALL(v)) , v.end());

typedef long long unsigned int llu;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<bool> vb;
const double EPS = 1e-9;
const int MOD = 1e9 + 7;
const int INF = (1 << 29);
const ll LINF = 1e18;
const double PI = acos(-1);

template<typename T>vector<T> make_v(size_t a) { return vector<T>(a); }
template<typename T, typename... Ts>auto make_v(size_t a, Ts... ts) { return vector<decltype(make_v<T>(ts...))>(a, make_v<T>(ts...)); }
template<typename T, typename U, typename... V>
typename enable_if<is_same<T, U>::value != 0>::type
fill_v(U & u, const V... v) { u = U(v...); }
template<typename T, typename U, typename... V>
typename enable_if<is_same<T, U>::value == 0>::type
fill_v(U & u, const V... v) { for (auto& e : u) fill_v<T>(e, v...); }
template<class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> bool chmin(T& a, const T& b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	vector<vector<char> > C;
	C.push_back({ '.',',','!','?',' ' });
	C.push_back({ 'a','b','c' });
	C.push_back({ 'd','e','f' });
	C.push_back({ 'g','h','i' });
	C.push_back({ 'j','k','l' });
	C.push_back({ 'm','n','o' });
	C.push_back({ 'p','q','r','s' });
	C.push_back({ 't','u','v' });
	C.push_back({ 'w','x','y','z' });
	int N;
	cin >> N;
	REP(i, N) {
		string S;
		cin >> S;
		int ind = 0;
		string ans = "";
		while (ind < SZ(S)) {
			char c = S[ind];
			ind++;
			if (c == '0') {
				continue;
			}
			int cnt = 0;
			while (S[ind] != '0') {
				ind++;
				cnt++;
			}
			ans += C[c - '1'][cnt % SZ(C[c-'1'])];
		}
		cout << ans << endl;
	}
	return 0;
}

