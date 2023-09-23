#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 101;
const int INF = 1<<28;
 
int main()
{
    int n,cost[MAX][MAX],a,b,c;
    while (cin >> n, n) {
	fill(cost[0], cost[MAX], INF);
 
	int M = 0;
	for (int i = 0; i < n; i++) {
	    cin >> a >> b >> c;
	    cost[a][b] = cost[b][a] = c;
	    M = max(M, max(a, b));
	}
	++M;
	for (int k = 0; k < M; k++) {
	    for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
		    cost[i][j] = min(cost[i][j], cost[i][k]+cost[k][j]);
		}
	    }
	}
	int ans = INF, sum, num;
	for (int i = 0; i < M; i++) {
	    sum = 0;
	    for (int j = 0; j < M; j++) {
		if (i == j) continue;
		sum += cost[i][j];
	    }
	    if (sum < ans) {
		ans = sum;
		num = i;
	    }
	}
	cout << num << ' ' << ans << endl;
    }
    return 0;
}