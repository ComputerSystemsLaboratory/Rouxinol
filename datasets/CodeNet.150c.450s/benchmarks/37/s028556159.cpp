#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<memory>
#include<functional>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;

typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef long long ll;

int dy[] = { 0, 0, 1, -1, 0 };
int dx[] = { 1, -1, 0, 0, 0 };

double Round(double x){
	x *= 1000;

	if (x > 0.0) {
		x = floor(x + 0.5);
	}
	else {
		x = -1.0 * floor(fabs(x) + 0.5);
	}

	x /= 1000;

	if (-0.0005 < x && x < 0.0005)
		x = 0.0000;

	return x;
}

int main(){
	ios::sync_with_stdio(false);

	int a, b, c, d, e, f;
	double x, y;
	int r;

	while (cin >> a >> b >> c >> d >> e >> f){
		r = b*d - a*e;
		x = Round(1.0*(b*f - c*e) / r);
		y = Round(1.0*(c*d - a*f) / r);
		
		printf("%.3lf %.3lf\n", x, y);
	}
}