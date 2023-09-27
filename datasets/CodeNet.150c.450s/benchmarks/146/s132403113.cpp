#include <cstdio>
#include <queue>
#include <algorithm>
#include <cmath>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n;
double x[4];
double y[4];

int main(){
	scanf("%d", &n);
	rep(i, n){
		rep(j, 4){
			scanf("%lf%lf", x + j, y + j);
		}

		double dx[2];
		double dy[2];
		dx[0] = x[0] - x[1];
		dx[1] = x[2] - x[3];
		dy[0] = y[0] - y[1];
		dy[1] = y[2] - y[3];

		// printf("(%lf, %lf) (%lf, %lf)\n", dx[0], dy[0], dx[1], dy[1]);

		printf("%s\n", fabs(dx[0] * dy[1] - dx[1] * dy[0]) < 1e-12 ? "YES" : "NO");
	}
	return 0;
}