#include<iostream>
using namespace std;

#define N 10
#define INF 1000000
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)

int main() {
	int n, cost[N][N], ans, num, sum, m, a, b, c;
	while(1) {
		cin >> n;
		if(!n) break;
		for(int i=0; i<N; ++i) for(int j=0; j<N; ++j) {
			cost[i][j] = (i==j?0:INF);
		}
		m = 0;
		for(int i=0; i<n; ++i) {
			cin >> a >> b >> c;
			cost[a][b] = cost[b][a] = c;
			m = max(m, max(a, b));
		}
		for(int k=0; k<=m; ++k) {
			for(int i=0; i<=m; ++i) {
				for(int j=0; j<=m; ++j) {
					cost[i][j] = min(cost[i][j], cost[i][k]+cost[k][j]);
				}
			}
		}
		ans = INF; num = -1;
		for(int i=0; i<=m; ++i) {
			sum = 0;
			for(int j=0; j<=m; ++j) {
				sum += cost[i][j];
			}
			if(ans>sum) {
				num = i;
				ans = sum;
			}
		}
		cout << num << " " << ans << endl;
	}
	return 0;
}