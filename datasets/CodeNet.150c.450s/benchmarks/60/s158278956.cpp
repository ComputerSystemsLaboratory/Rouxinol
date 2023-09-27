#include <bits/stdc++.h>
using namespace std;

int a[102][102];
int main(){
	int n, u, k, t;
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		scanf("%d%d", &u, &k);
		for(int j = 0;j < k;j++){
			scanf("%d", &t);
			a[u][t] = 1;
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j < n;j++)printf("%d ", a[i][j]);
		printf("%d\n", a[i][n]);
	}
	return 0;
}
