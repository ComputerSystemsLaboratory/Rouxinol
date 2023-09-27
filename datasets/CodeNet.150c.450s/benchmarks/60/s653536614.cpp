#include<cstdio>

#define MAX_N 100

int n, u, k, v;
int adj[MAX_N][MAX_N];

int main(void){
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			adj[i][j] = 0;
		}
	}

	for(int i = 0; i < n; i++){
		scanf("%d", &u);
		u -= 1;
		scanf("%d", &k);
		for(int j = 0; j < k; j++){
			scanf("%d", &v);
			v -= 1;
			adj[u][v] = 1;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d", adj[i][j]);
			if(j != n - 1){
				printf(" ");
			}
			else if(j == n - 1){
				printf("\n");
			}
		}
	}

	return 0;
}