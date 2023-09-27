#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include "bits/stdc++.h"
#define REP(i,a,b) for(int i=a;i<b;++i)
#define rep(i,n) REP(i,0,n)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define ALL(a) begin(a),end(a)
#define ifnot(a) if(not (a))
#define dump(x)  cerr << #x << " = " << (x) << endl
using namespace std;

// #define int ll
#ifdef _MSC_VER
const bool test = true;
#else 
const bool test = false;
#endif

int dx[] = { 0,1,0,-1 };
int dy[] = { 1,0,-1,0 };
#define INF (1 << 28)
ull mod = (int)1e9 + 7;
//.....................
const int MAX = (int)2e5 + 5;

int main() {
	string s;
	getline(cin, s);
	stringstream ss(s);
	map<string, int> m;
	string s2;
	string max_size_s;
	// dump(max_size_s.size());
	while (ss >> s2) {
		m[s2]++;
		if (s2.size() > max_size_s.size()) {
			max_size_s = s2;
		}
	}
	string most_fre_s;
	int most_fre_cnt = 0;
	for (auto p : m) {
		if (p.second > most_fre_cnt) {
			most_fre_s = p.first;
			most_fre_cnt = p.second;
		}
	}
	cout << most_fre_s << " " << max_size_s << endl;
	return 0;
}