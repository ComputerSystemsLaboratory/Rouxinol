#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

#define MAX 100

int n, M[MAX][MAX] = {};
int d[MAX];

void bfs(int s) {
	queue<int> q;
	q.push(s);
	d[s] = 0;
	for (int u; !q.empty();) {
		u = q.front(); q.pop();
		for (int v = 0; v < n; v++) {
			if (M[u][v] == 0)continue;
			if (d[v] != INF)continue; //?????§?????¢?´¢???????????????????£???°???
			d[v] = d[u] + 1;
			q.push(v);
		}
	}
	for (int i = 0; i < n; i++) {
		cout << i + 1 /*zefo-based*/ << " " << ((d[i] == INF) ? (-1) : d[i]) << endl;
	}
}

int main() {
	cin >> n;
	memset(d, INF, sizeof(d));
	for (int i = 0, u, k; i < n; i++) {
		cin >> u >> k;
		u--;
		for (int j = 0, v; j < k; j++) {
			cin >> v;
			v--;
			M[u][v] = 1;
		}
	}

	bfs(0); //zero-based

	return 0;
}