// Parallelism
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0021& lang=jp
// https://onlinejudge.u-aizu.ac.jp/#/problems/0021
// 中央×前

#include <iostream>
#include <vector>
#include <string>
#include <complex>
using namespace std;

#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define REP(i,n) for(int i=0;i<n;i++)
#define pb push_back


// vectorの中身をcout << vs;で表示
template <class T>
ostream &operator<<(ostream &o, const vector<T> &v)
{
    o << "{";
    for (int i = 0; i < (int)v.size(); i++) o << (i > 0 ? ", " : "") << v[i];
    o << "}";
    return o;
}

typedef complex<double> xy_t;
const double eps = 1e-11;

double cross_product(xy_t a, xy_t b) { return (conj(a)*b).imag(); }

double signed_area(xy_t v1, xy_t v2) {
	return cross_product(v1, v2) / 2;
}

bool is_pararell(xy_t a, xy_t b, xy_t c, xy_t d) {
	xy_t v1 = xy_t(b.real()-a.real(), b.imag()-a.imag());
	xy_t v2 = xy_t(d.real()-c.real(), d.imag()-c.imag());

	// cout << signed_area(v1, v2) << endl;

	if (abs(signed_area(v1, v2)) < eps) return true;
	else return false;
}


int main(void) {
	// cin, coutの結びつきを解除し、速くする
	cin.tie(0);
   	ios::sync_with_stdio(false);

	int n; cin >> n;
	vector<string> vs;
	while(n--) {
		double x1, x2, x3, x4;
		double y1, y2, y3, y4;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		xy_t a = xy_t(x1, y1);
		xy_t b = xy_t(x2, y2);
		xy_t c = xy_t(x3, y3);
		xy_t d = xy_t(x4, y4);
		if (is_pararell(a, b, c, d)) vs.pb("YES");
		else vs.pb("NO");
	}

	for (auto v:vs) {
		if (v == "YES") YES;
		else NO;
	}


}


