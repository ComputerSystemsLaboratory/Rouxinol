#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>

using namespace std;


#define all(c) ((c).begin()), ((c).end())
#define debug(c) cerr << "> " << #c << " = " << (c) << endl;
#define iter(c) __typeof((c).begin())
#define tr(i, c) for (iter(c) i = (c).begin(); i != (c).end(); i++)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)

#define mp make_pair
#define fst first
#define snd second
#define pb push_back


const double EPS = 1e-10;


typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef complex<double> P;


inline double dot(const P &a, const P &b) {
	return (conj(a) * b).real();
}

inline double det(const P &a, const P &b) {
	return (conj(a) * b).imag();
}



int contains(const vector<P> &ps, P q) {
	int n = ps.size();
	int res = -1;
	
	rep (i, n) {
		P a = ps[i] - q, b = ps[(i + 1) % n] - q;
		if(a.imag() > b.imag()) swap(a, b);
		if(a.imag() < EPS && b.imag() > EPS && det(a, b) > EPS) res = -res;
		if(fabs(det(a, b)) < EPS && dot(a, b) < EPS) return 0;
	}
	return res;
}

int main(){
	for (double x1, y1, x2, y2, x3, y3, xp, yp; cin>> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp; ) {
		vector<P> ps;
		ps.pb(P(x1, y1));
		ps.pb(P(x2, y2));
		ps.pb(P(x3, y3));
		P q(xp, yp);
		cout << (contains(ps, q) == 1 ? "YES" : "NO" ) << endl;
	}
	
	return 0;
}