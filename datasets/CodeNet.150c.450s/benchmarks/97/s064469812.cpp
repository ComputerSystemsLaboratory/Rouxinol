#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int xs[256], ys[256];
	int xmin, xmax, ymin, ymax;
	int dx[] = {-1, 0, 1, 0};
	int dy[] = {0, 1, 0, -1};
	int N;
	
	xs[0] = ys[0] = 0;
	while (scanf("%d", &N) && N){
		xmin = xmax = ymin = ymax = 0;
		for (int i = 1; i < N; i++){
			int n, d;
			scanf("%d %d", &n, &d);
			xs[i] = xs[n] + dx[d];
			ys[i] = ys[n] + dy[d];
			xmin = min(xmin, xs[i]), ymin = min(ymin, ys[i]);
			xmax = max(xmax, xs[i]), ymax = max(ymax, ys[i]);
		}
		
		printf("%d %d\n", xmax - xmin + 1, ymax - ymin + 1);
	}
	
	return (0);
}