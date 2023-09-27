#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep0(N) for (int COUNTER = 0; COUNTER < (int)(N); COUNTER++)
#define rep(i, N) for (int i = 0; i < (int)(N); i++)
#define rep1(i, N) for (int i = 0; i < (int)(N); i++)
#define rep2(i, START, GOAL) for (int i = (int)(START); i < (int)(GOAL); i++)
#define rep3(i, START, GOAL) for (int i = (int)(START); i > (int)(GOAL); i--)
#define ALL(CONTAINER) CONTAINER.begin(), CONTAINER.end()
#define rALL(CONTAINER) CONTAINER.rbegin(), CONTAINER.rend()
#define from1(CONTAINER) CONTAINER.begin() + 1, CONTAINER.end()
#define rfrom1(CONTAINER) CONTAINER.rbegin(), CONTAINER.rend() - 1
#define output(X) cout << X << "\n"
#define dberr(X) cerr << X << " "
#define dberrl(X) cerr << X << "\n"
#define db(X) cerr << #X << ":" << (X) << " "
#define dbl(X) cerr << #X << ":" << (X) << "\n"
#define db2(X, Y) cerr << #X << ":" << (X) << ", " << #Y << ":" << (Y) << " "
#define db2l(X, Y) cerr << #X << ":" << (X) << ", " << #Y << ":" << (Y) << "\n"
#define dbl2(X, Y) cerr << #X << ":" << (X) << "\n" << #Y << ":" << (Y) << "\n"
#define db3(X, Y, Z) cerr << #X << ":" << (X) << ", " << #Y << ":" << (Y) << " " << #Z << ":" << (Z) << " "
#define db3l(X, Y, Z) cerr << #X << ":" << (X) << ", " << #Y << ":" << (Y) << ", " << #Z << ":" << (Z) << "\n"
#define dbl3(X, Y, Z) cerr << #X << ":" << (X) << "\n" << #Y << ":" << (Y) << "\n" << #Z << ":" << (Z) << "\n"
#define dbp(PAIR) cerr << #PAIR << ":(" << PAIR.first << ", " << PAIR.second << ") "
#define dbpl(PAIR) cerr << #PAIR << ":(" << PAIR.first << ", " << PAIR.second << ")\n"
#define dbt3(TUPLE3) cerr << #TUPLE3 << ":(" << get<0>(TUPLE3) << ", " << get<1>(TUPLE3) << ", " << get<2>(TUPLE3) << ") "
#define dbt3l(TUPLE3) cerr << #TUPLE3 << ":(" << get<0>(TUPLE3) << ", " << get<1>(TUPLE3) << ", " << get<2>(TUPLE3) << ")\n"
#define dbt4(TUPLE4) cerr << #TUPLE4 << ":(" << get<0>(TUPLE4) << ", " << get<1>(TUPLE4) << ", " << get<2>(TUPLE4) << ", " << get<3>(TUPLE4) << ") "
#define dbt4l(TUPLE4) cerr << #TUPLE4 << ":(" << get<0>(TUPLE4) << ", " << get<1>(TUPLE4) << ", " << get<2>(TUPLE4) << ", " << get<3>(TUPLE4) << ")\n"
#define dbv(VEC) cerr << #VEC << ":{ "; for (auto ELEM : VEC) cerr << ELEM << ", "; cerr << "}\n"
#define dbvp(VP) cerr << #VP << ":{ "; for (auto PAIR : VP) cerr << "(" << PAIR.first << ", " << PAIR.second << "), "; cerr << "}\n"
#define dbvv(VV) cerr << #VV << ":{\n"; for (auto VEC : VV) { cerr << "{ "; for (auto ELEM : VEC) cerr << ELEM << ", "; cerr << "},\n"; } cerr << "}\n"
#define dbvvp(VVP) cerr << #VVP <<":{\n"; for (auto VP : VVP) { cerr << "{ "; for (auto PAIR : VP) { cerr << "(" << PAIR.first << ", " << PAIR.second << "), "; } cerr << "},\n"; } cerr << "}\n";
#define dbm(MAP) cerr << #MAP << ":{ "; for (auto PAIR : MAP) cerr << "(" << PAIR.first << ", " << PAIR.second << "), "; cerr << "}\n"
#define YN(f) cout << (f ? "YES" : "NO") << "\n"
#define Yn(f) cout << (f ? "Yes" : "No") << "\n"
#define yn(f) cout << (f ? "yes" : "no") << "\n"
using ll = long long;
using vi = vector<int>; using vl = vector<ll>; using vd = vector<double>; using vs = vector<string>; using vb = vector<bool>;
using vvi = vector<vi>; using vvl = vector<vl>; using vvd = vector<vd>; using vvb = vector<vb>;
using pii = pair<int, int>; using pil = pair<int, ll> ; using pli = pair<ll, int>; using pll = pair<ll, ll>; using pdd = pair<double, double>;
using vpii = vector<pii>; using vpll = vector<pll>; using vpdd = vector<pdd>;
using ti3 = tuple<int, int, int>; using tl3 = tuple<ll, ll, ll>; using td3 = tuple<double, double, double>;
using ti4 = tuple<int, int, int, int>; using tl4 = tuple<ll, ll, ll, ll>; using td4 = tuple<double, double, double, double>;
using mii = map<int, int>; using mil = map<int, ll>; using mli = map<ll, int>; using mll = map<ll, ll>;
using si = set<int>; using sl = set<ll>;
// db

const int MAX = 24 * 60 * 60;

int second(string S) {
	int h = stoi(S.substr(0, 2));
	int m = stoi(S.substr(3, 2));
	int s = stoi(S.substr(6, 2));
	return h * 60 * 60 + m * 60 + s;	
}

void solve(int n) {
	vi a(MAX);
	rep0(n) {
		string str1, str2; cin >> str1 >> str2;
		int l = second(str1), r = second(str2);
		// db2l(l, r);
		a[l]++; a[r]--;
	}
	// dbv(a);
	rep2(i, 1, MAX) a[i] += a[i - 1];
	// dbv(a);
	output(*max_element(ALL(a)));	
}

int main() {
	while (true) {
		int n; cin >> n;
		if (n) solve(n);
		else break;		
	}
}
