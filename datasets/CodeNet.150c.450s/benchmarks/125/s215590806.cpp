#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int n = 0;
int u = 0;
int k[101];
int v[101][101];
int Discover[101] = { 0 };
int End[101] = { 0 };
//int nx = 0;
int p = 0;
void dfs(int l) {
	int i;
	int j;
	if (!Discover[l]) {
		Discover[l] = ++p;

		for (i = 0; i < n + 1; i++) {
			if (v[l][i]) {
				dfs(v[l][i]);
			}
		}
		End[l] = ++p;
	}
}
int main()
{
	int i;
	int j;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> u ;
		cin >> k[u];
		for (j = 0; j < k[u]; j++) {
			cin >> v[u][j];
		}
	}
	for (i = 1; i < n + 1; i++) {
		if (!Discover[i]) {
			dfs(i);
		}
	}
	for (i = 1; i < n + 1; i++) {
		cout << i << " " << Discover[i] << " " << End[i] << endl;
	}
}
