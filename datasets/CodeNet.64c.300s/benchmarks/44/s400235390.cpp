#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 100000000;
const int MAX_N = 10;
int main() {
	int n;
	while (cin >> n,n) {
		int dis[MAX_N + 1][MAX_N + 1];
		int V = 0, s[11] = { 0 };
		for (int i = 0; i < MAX_N + 1; i++) {
			for (int j = 0; j < MAX_N + 1; j++) {
				if (i == j) dis[i][j] = 0;
				else dis[i][j] = INF;
			}
		}
		for (int i = 0; i < n; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			dis[a][b] = c;
			dis[b][a] = c;
			V = max(V, max(a, b));
		}
		for (int k = 0; k <= V; k++) {
			for (int i = 0; i <= V; i++) {
				for (int j = 0; j <= V; j++) {
					dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
				}
			}
		}
		int x = INF;
		for (int i = 0; i <=V; i++) {
			int sum = 0;
			for (int j = 0; j <=V; j++) {
				sum += dis[i][j];
			}
			s[i] = sum;
			x = min(x, sum);
		}
		for (int i = 0; i <= V; i++) {
			if (s[i] == x) {
				cout << i << " " << x << endl;
				break;
			}
		}
	}
}

