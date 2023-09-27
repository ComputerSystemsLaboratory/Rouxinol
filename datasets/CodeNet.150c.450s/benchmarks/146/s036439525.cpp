#include <bits/stdc++.h>

using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
#define MOD 1e9 + 7

typedef long long ll;
typedef unsigned long long ull;
typedef complex<double> P;

// ?¨±?????????????????
#define EPS (1e-10)
// 2??????????????????????????????????????????
#define EQ(a,b) (abs((a)-(b)) < EPS)

// ?????? (cross product) : a??b = |a||b|sin??
double cross(P a, P b) {
  return (a.real() * b.imag() - a.imag() * b.real());
}

// 2??´?????????????????? : a//b <=> cross(a, b) = 0
int is_parallel(P a1, P a2, P b1, P b2) {
  return EQ( cross(a1-a2, b1-b2), 0.0 );
}

int main() {
	int N;
	scanf("%d", &N);
	rep(i, N) {
		double x1, y1, x2, y2, x3, y3, x4, y4;
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		P a(x1, y1), b(x2, y2), c(x3, y3), d(x4, y4);
		printf("%s\n", (is_parallel(a, b ,c ,d)) ? "YES" : "NO");
	}
	return 0;
}