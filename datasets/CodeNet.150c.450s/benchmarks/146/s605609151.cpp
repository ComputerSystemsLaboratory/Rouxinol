#include <array>
#include <complex>
#include <iostream>
using namespace std;

const double EPS = 1e-10;
template<class T>
bool eq(const T& a, const T& b) {return abs(a - b) < EPS;}

/* 点
 *
 * x 座標は p.real()
 * y 座標は p.imag()
 * 足し算，引き算，スカラー倍は定義済み
 */
typedef complex<double> point;
namespace std {
	bool operator<(const point& a, const point& b) {
		return real(a) != real(b) ? real(a) < real(b) : imag(a) < imag(b);
	}
}

/*
 * 直線・線分
 *
 * 辞書順の比較演算子が定義済み
 * 端点を for で走れる
 * {{x, y}} で初期化
 */
typedef array<point, 2> line;

double cross(const point& a, const point& b) {
	return imag(conj(a)*b);
}


bool is_parallel(const line& s, const line& t) {
	return eq(cross(s[0] - s[1], t[0] - t[1]), 0.0);
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		line s, t;
		for (auto& p : s) {
			double x, y; cin >> x >> y;
			p = point(x, y);
		}
		for (auto& p : t) {
			double x, y; cin >> x >> y;
			p = point(x, y);
		}
		cout << (is_parallel(s, t)?"YES":"NO") << endl;
	}
	return 0;
}