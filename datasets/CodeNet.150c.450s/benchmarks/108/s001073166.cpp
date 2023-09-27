#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <string.h>
#include <limits.h>
using namespace std;
vector<int> v[101];
int d[101];
queue<int> q;
bool flag[101];
int main(){
	int n, u, k; scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		scanf("%d %d", &u, &k);
		for (int j = 0; j < k; ++j){
			int tmp; scanf("%d", &tmp);
			v[u].push_back(tmp);
		}
	}
	memset(d, -1, sizeof(d));
	d[1] = 0;
	q.push(1); flag[1] = true;
	while (!q.empty()){
		int m = q.front(); q.pop();
		for (int i = 0; i < v[m].size(); ++i){
			int tmp = v[m][i];
			if (!flag[tmp]){
				flag[tmp] = true;
				d[tmp]=d[m]+1;
				q.push(tmp);
			}
		}
	}
	for (int i = 1; i <= n; ++i){
		cout << i << ' ' << d[i] << '\n';
	}
}