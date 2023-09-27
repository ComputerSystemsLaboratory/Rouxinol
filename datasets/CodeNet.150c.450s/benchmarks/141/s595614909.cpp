#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
#include <fstream>
using namespace std;
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string toStr(T x) { ostringstream sout; sout << x; return sout.str();}
typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,(n)-1)
const double EPS = 1e-12;
const double PI = acos(-1.0);
const int INF = INT_MAX/10;

#include <complex>
typedef complex<double> P;
typedef vector<P> vP;
typedef vector<double> vd;

#define EQ(x,y) (abs((x)-(y))<EPS)

double rad(double deg) {
	return deg*PI/180.0;
}

double dot(P a, P b) {
	return (a.real()*b.real() + a.imag()*b.imag());
}

double cross(P a, P b) {
	return (a.real()*b.imag() - a.imag()*b.real());
}

double distance_ls_p(P a, P b, P c) {
	if(dot(b-a, c-a) < -EPS) return abs(c-a);
	if(dot(a-b, c-b) < -EPS) return abs(c-b);
	return abs(cross(b-a, c-a)) / abs(b-a);
}

int main() {
	double x1, y1, x2, y2, x3, y3, xp, yp;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
		P a(x1, y1), b(x2, y2), c(x3, y3), p(xp, yp);

		double S1 = abs(a-b) * distance_ls_p(a, b, c);
		double S2 = abs(a-b) * distance_ls_p(a, b, p);
		S2 += abs(b-c) * distance_ls_p(b, c, p);
		S2 += abs(c-a) * distance_ls_p(c, a, p);

		if(EQ(S1, S2)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}