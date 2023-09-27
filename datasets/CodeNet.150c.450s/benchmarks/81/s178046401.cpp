#include <cstdio>
#include <algorithm>

using namespace std;

#define chmin(a,b) a=min(a,b)
#define rep(i,x) for(int i=0;i<(x);++i)

const int inf = 1e9;

int d[10][10];
int N;

void wf()
{
	rep(k, 10) rep(i, 10) rep(j, 10) {
		chmin(d[i][j], d[i][k] + d[j][k]);
	}
}

int main()
{
	while (scanf("%d", &N), N) {
		fill(d[0], d[10], inf);
		rep(i, 10) d[i][i] = 0;

		rep(i, N) {
			int a, b, c; scanf("%d %d %d", &a, &b, &c);
			d[a][b] = d[b][a] = c;
		}

		wf();

		int mi = inf, a;

		rep(i, 10) {
			int sum = 0;
			rep(j, 10) {
				if (d[i][j] != inf) sum += d[i][j];
			}
			if (sum != 0 && mi > sum) {
				mi = sum;
				a = i;
			}
		}

		printf("%d %d\n", a, mi);
	}
}