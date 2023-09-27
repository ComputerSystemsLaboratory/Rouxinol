#include<iostream>
using namespace std;
#include<cstdio>
#include<utility>
#include<vector>

int main()
{
	int i, j, n, m, from, to, cost;
	scanf("%d %d", &n, &m);

	int D[100][100];
	bool check[100][100];

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			check[i][j] = false;
		}
	}

	for(i = 0; i < n; i++){ D[i][i] = 0; check[i][i] = true; }
	for(int k = 0; k < m; k++){
		scanf("%d %d %d", &from, &to, &cost);
		D[from][to] = cost;
		check[from][to] = true;
	}

	for(int mid = 0; mid < n; mid++){
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				if(check[i][mid] && check[mid][j]){
					if(check[i][j]){
						if(D[i][j] > D[i][mid] + D[mid][j]){
							D[i][j] = D[i][mid] + D[mid][j];
						}
					}else{
						D[i][j] = D[i][mid] + D[mid][j];
						check[i][j] = true;
					}
				}
			}
		}
	}
	for(i = 0; i < n; i++){
		if(D[i][i] < 0){
			printf("NEGATIVE CYCLE\n"); break;
		}
	}
	if(i == n){
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				if(check[i][j]){
					printf("%d", D[i][j]);
				}else{
					printf("INF");
				}
				if(j < n - 1){ printf(" "); }
			}
			printf("\n");
		}
	}
	return 0;
}