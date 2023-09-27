#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;
bool flag[101];
int d[101];
int f[101];
vector<int> v[101];
int t;
void dfs(int node){
	flag[node] = true;
	d[node] = t;
	bool finished = true;
	if (finished && f[node] == 0) f[node] = t;
	for (int i = 0; i < v[node].size(); ++i){
		int tmp = v[node][i];
		if (!flag[tmp]){
			++t;
			dfs(tmp);
			++t;
		}
	}
	f[node] = t;
}
int main(){
	int n; scanf("%d",&n);
	for (int i = 0; i < n; ++i){
		int u, k; scanf("%d %d",&u,&k);
		int tmp;
		for (int j = 0; j < k; ++j){
			scanf("%d", &tmp);
			v[u].push_back(tmp);
		}
	}
	v[0].push_back(1);
	dfs(0);
	++t;
	for (int i = 1; i <= n; ++i){
		if (d[i] == 0) dfs(i);
	}
	for (int i = 1; i <= n; ++i){
		cout << i << ' ' << d[i] << ' ' << f[i]+1 << '\n';
	}
}