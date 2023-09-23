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

int a[4];
int b[4];

int main() {
	while (cin >> a[0]) {
		rep(i, 3) {
			cin >> a[i+1];
		}
		rep(i, 4) {
			cin >> b[i];
		}
		int hit_n = 0;
		rep(i, 4) {
			if (a[i] == b[i]) hit_n++;
		}
		int blow_n = 0;
		rep(i, 4) rep(j, 4) {
			if (i == j) continue;
			if (a[i] == b[j]) blow_n++;
		}
		cout << hit_n << " " << blow_n << endl;
	}
	return 0;
}