#include<stdio.h>
#include<iostream>
using namespace std;
int v[101][101];
int k[101];
int d[101],f[101];
int n=0;
int u=0;
int t = 0;
void dfs(int l) {
	//cout << "l==" << l << endl;
	if (!d[l]) {
		d[l] = ++t;
	}
	for (int i = 0; i <= n; i++) {
		if (!d[v[l][i]]) {
			dfs(v[l][i]);
		}
	}
	f[l] = ++t;
}
int main(void) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> u;
		cin >> k[i];
		for (int j = 0; j < k[i]; j++) {
			cin >> v[u][j];
		}
	}
	for (int i = 0; i < n; i++) {
		f[i] = -1;
	}
	for (int i = 0; i < n; i++) {
		if (!d[i]) {
			dfs(i);
		}
	}

	for (int i = 1; i < n + 1; i++) {
		cout << i << " " << d[i]-2 <<" "<< f[i]-2 << endl;
	}

	return 0;
}
