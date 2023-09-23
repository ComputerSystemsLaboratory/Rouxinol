#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <limits.h>
using namespace std;

int a[101][101];
int main(){
	int n; scanf("%d",&n);
	for (int i = 1; i <= n; ++i){
		int u, k; scanf("%d %d",&u,&k);
		int tmp;
		while(k--){
			scanf("%d",&tmp);
			a[u][tmp] = 1;
		}
	}
	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= n; ++j){
			if (j != 1) cout << ' ';
			cout << a[i][j];
		}
		cout << '\n';
	}
}