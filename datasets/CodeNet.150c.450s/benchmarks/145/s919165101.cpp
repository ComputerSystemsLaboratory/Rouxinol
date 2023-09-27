#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define FOR(i, m, n) for(int i=(m); i<(n); ++i)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define Cout(x) cout << (x) << endl
#define dump(x) cerr << #x << " = " << (x) << endl;
typedef long long LL;
typedef vector<int> VI;
typedef vector<long long> VL;
typedef vector<string> VS;
typedef vector<vector<int>> VVI;
typedef pair<int, int> PII;
const int inf = (int)1e9;
const long long mod = 998244353LL;
const double pi = acos(-1.0);

//文字列分割
vector<string> split(string str, char del) {
	vector<string> re; string sub;
	for (char c : str) {
		if (c == del) re.push_back(sub), sub.clear();
		else sub += c;
	}
	re.push_back(sub);
	return re;
}

//小文字に変換
string StoLower(string s) {
	string ret;
	for (auto a : s)ret += tolower(a);
	return ret;
}

int main() {
	string S; getline(cin, S);
	VS S2 = split(S, ' ');
	VS s;
	for (auto aaa : S2) {
		s.pb(StoLower(aaa));
	}

	string a1, a2 = s[0];
	int c1 = -1;
	map<string, int> ma;
	for (auto aa : s) {
		ma[aa]++;
		if (sz(a2) < sz(aa))a2 = aa;
	}
	for (auto aa : ma) {
		if (c1 < aa.second) { c1 = aa.second; a1 = aa.first; }
	}
	cout << a1 << " " << a2 << endl;
}
