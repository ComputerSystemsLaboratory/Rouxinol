#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<bitset>
#include<vector>
#include<deque>
#include<queue>
#include<map>
#include<set>
#include<stack>
#include<cmath>
#include<iomanip>
#include <functional>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
const int INF = 1 << 28;
//cout << fixed << std::setprecision(9)
//memset(a, 0, sizeof(a));
//--------------------------

int n;
bool g[110][110];
int d[110];

void bfs(int s)
{
	d[s] = 0;
	queue<int> q;
	q.push(s);

	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (g[u][i] && d[i] == -1) {
				q.push(i);
				d[i] = d[u] + 1;
			}
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		int u, k, v;
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			g[u][v] = true;
		}
	}

	for (int i = 1; i <= n; i++) d[i] = -1;

	bfs(1);

	for (int i = 1; i <= n; i++)
		cout << i << " " << d[i] << endl;

	return 0;
}