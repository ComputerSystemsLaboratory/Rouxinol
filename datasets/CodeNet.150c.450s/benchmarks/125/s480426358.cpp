#include <iostream>
#include <stack>
#include <algorithm>
#include <cmath>
using namespace std;

int M[101][101], cond[101], st[101], en[101], n, t;
stack<int> S;

void setAdj()
{
	int u, k, v;
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			M[u][v] = 1;
		}
	}
}

void dfs(int x)
{
	S.push(x);
	cond[x] = -1; //?¨???????
	st[x] = ++t;

	int i, j;
	while (!S.empty()) {
		int u = S.top();
		for (i = 1; i <= n; i++) {
			if (M[u][i] == 1 && cond[i] == 0) {
				break;
			}
		}
		if (i == n + 1) {
			cond[u] = 1;
			en[u] = ++t;
			S.pop();
		}
		else {
			S.push(i);
			cond[i] = -1;
			st[i] = ++t;	
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	t = 0;
	setAdj();
	
	for (int i = 1; i <= n; i++)
		if (cond[i] == 0) dfs(i);

	for (int i = 1; i <= n; i++) {
		cout << i << " " << st[i] << " " << en[i] << endl;
	}
	return 0;
}