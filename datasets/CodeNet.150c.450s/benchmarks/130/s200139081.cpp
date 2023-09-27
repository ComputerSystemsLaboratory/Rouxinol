#include<cstdio>

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	int a[n][m];
	int b[m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}

	for(int i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}

	for(int i = 0; i < n; i++){
		int t = 0;
		for(int j = 0; j < m; j++){
			t += a[i][j] * b[j];
		}
		printf("%d\n", t);
	}
}