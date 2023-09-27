#include <cstdio>
#include <algorithm>

using namespace std;

#define MAX 200

int N, n, d, x[MAX], y[MAX];
const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };

int main() {
	while(1) {
		scanf("%d", &N);
		if(N == 0)
			return 0;
		x[0] = y[0] = 0;
		for(int i = 1; i < N; i++) {
			scanf("%d %d", &n, &d);
			x[i] = x[n] + dx[d];
			y[i] = y[n] + dy[d];
		}
		int xmax = -MAX, ymax = -MAX;
		int xmin =  MAX, ymin =  MAX;
		for(int i = 0; i < N; i++) {
			xmax = max(xmax, x[i]);
			ymax = max(ymax, y[i]);
			xmin = min(xmin, x[i]);
			ymin = min(ymin, y[i]);
		}
		printf("%d %d\n", xmax - xmin + 1, ymax - ymin + 1);
	}
}