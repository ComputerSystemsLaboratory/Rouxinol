#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <list>
#include <cstring>
#include <stack>

using namespace std;

#define mod 1000000007

int n;
int d[101], v[101];
int graph[101][101] = {};

int solve(int k, int cnt)
{
	d[k] = cnt;
	int nowcnt = cnt;
	for(int i = 0; i < n; i++){
		if(d[i] < 0 && graph[k][i] > 0) nowcnt = solve(i, nowcnt + 1);
	}
	return v[k] = nowcnt + 1;
}

int main()
{
	cin >> n;
	for(int i = 0; i < n; i++){
		d[i] = -1;
		v[i] = -1;
		int u, k;
		cin >> u >> k;
		u--;
		for(int j = 0; j < k; j++){
			int v;
			cin >> v;
			v--;
			graph[u][v] = 1;
		}
	}
	int nowcnt = 1;
	for(int i = 0; i < n; i++){
		if(d[i] < 0) nowcnt = solve(i, nowcnt) + 1;
	}
	for(int i = 0; i < n; i++){
		cout << i + 1 << " " << d[i] << " " << v[i] << endl;
	}
}