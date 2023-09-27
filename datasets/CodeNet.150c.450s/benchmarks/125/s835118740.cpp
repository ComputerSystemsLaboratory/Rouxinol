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
int f[110];
int current;

void dfs1(int s)
{
	if (d[s] != -1) return;

	stack<int> stk;
	d[s] = ++current;
	stk.push(s);
	while (!stk.empty()) {
		int u = stk.top();
		int flag = 0;
		for (int j = 1; j <= n; j++) {
			if (g[u][j] && d[j] == -1) {
				flag = 1;
				stk.push(j);
				d[j] = ++current;
				break;
			}
		}

		if (flag == 0) {
			f[u] = ++current;
			stk.pop();
		}

	}
}

void dfs()
{
	for (int i = 1; i <= n; i++)
		dfs1(i);

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

	for (int i = 1; i <= n; i++) {
		d[i] = -1;
		f[i] = -1;
	}

	dfs();

	for (int i = 1; i <= n; i++) {
		cout << i << " " << d[i] << " " << f[i] << endl;
	}

	return 0;
}