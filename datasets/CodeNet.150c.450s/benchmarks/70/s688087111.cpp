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

int dayofweek(int year, int month, int day) {
	struct tm t;
	t.tm_year = year - 1900;
	t.tm_mon = month - 1;
	t.tm_mday = day;
	t.tm_hour = 0;
	t.tm_min = 0;
	t.tm_sec = 0;
	t.tm_isdst = -1;
	if (mktime(&t) == -1) {
		puts("!");
		exit(1);
	}
	return t.tm_wday;
}

int main() {
	vector<string> week_name = { "Sunday", "Monday", "Tuesday", "Wednesday",
		"Thursday","Friday","Saturday" };
	while (1) {
		int m, d;
		cin >> m >> d;
		if (m == 0) break;
		cout << week_name[dayofweek(2004, m, d)] << endl;
	}
	return 0;
}