#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <complex>
using namespace std;

typedef long long ll;
typedef pair<int,int> P;

#define all(c) (c).begin(),(c).end()
#define pb push_back
#define mp make_pair
#define ERASE(v,i) (v).erase(remove(all(v),i),(v).end())
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define each(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define debug(x) cerr<<#x<<" = "<<(x)<<endl;
#define LINE cerr<<"LINE: "<<__LINE__<<endl;

inline int toInt(string s){int v;istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x){ostringstream sout;sout<<x;return sout.str();}
template<class T> void preview(T a,T b){for(T it=a;it!=b;++it)cerr<<*it<<" ";cerr<<endl;}

const int INF = 100000000;
const double PI = acos(-1.0), EPS = 1e-10;

double crp(double x1, double y1, double x2, double y2) {
	return x1 * y2 - y1 * x2;
}

double vabs(double x, double y) {
	return sqrt(x * x + y * y);
}

int main() {
	for(double x1, y1, x2, y2, x3, y3, xp, yp; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp;) {
		x1 -= xp;
		x2 -= xp;
		x3 -= xp;

		y1 -= yp;
		y2 -= yp;
		y3 -= yp;

		double v1 = vabs(x1, y1);
		double v2 = vabs(x2, y2);
		double v3 = vabs(x3, y3);

		double rad_a = crp(x1, y1, x2, y2) / (v1 * v2);
		double rad_b = crp(x2, y2, x3, y3) / (v2 * v3);
		double rad_c = crp(x3, y3, x1, y1) / (v3 * v1);

		if((rad_a > 0.0 && rad_b > 0.0 && rad_c > 0.0) || (rad_a < 0.0 && rad_b < 0.0 && rad_c < 0.0)) puts("YES");
		else puts("NO");
	}
	return 0;
}