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
	map<int, int> m;
	int v;
	while (cin >> v) {
		m[v]++;
	}
	vector<pair<int,int>> vec;
	for (auto p : m) {
		vec.push_back({ p.second, p.first });
	}
	sort(ALL(vec));
	rep(i,vec.size()) {
		if (vec[i].first == vec.back().first) {
			cout << vec[i].second << endl;
		}
	}
	return 0;
}