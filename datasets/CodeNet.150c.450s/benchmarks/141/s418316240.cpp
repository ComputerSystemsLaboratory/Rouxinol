#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)

#define EPS (1e-8)
#define EQ(a,b) (abs((a)-(b)) < EPS)
#define EQV(a,b) ( EQ(a.real(), b.real()) && EQ(a.imag(), b.imag()) )

typedef complex<double> p;

double cross(p a, p b) {
	return (a.real() * b.imag() - a.imag() * b.real());
}

int main() {
	while (true) {
		double x[4], y[4];
		if (scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
			&x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3]) == EOF) break;
		p point[4];
		REP(i, 4) point[i] = p(x[i], y[i]);
		
		int cnt[2] = {};
		REP(i, 3) {
			int now = (i + 1) % 3;
			p v[2];
			v[0] = point[now] - point[i];
			v[1] = point[3] - point[i];
			
			if (cross(v[0], v[1]) < -EPS) cnt[0]++;
			else cnt[1]++;
		}
		
		if (cnt[0] == 3 || cnt[1] == 3) puts("YES");
		else puts("NO");
	}
	return 0;
}