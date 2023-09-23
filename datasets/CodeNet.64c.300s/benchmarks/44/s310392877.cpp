#include <bits/stdc++.h>

using namespace std;

int main(){
	while (true){
		int array[10][10], a, b, c, i, j, k, m = 0, n, ans_map = 0, ans_cost = 1 << 25;
		scanf("%d", &n);
		if (!n){
			return 0;
		}
		for (i = 0; i < 10; i++){
			for (j = 0; j < 10; j++){
				if (i == j){
					array[i][j] = 0;
				}
				else{
					array[i][j] = 1 << 25;
				}
			}
		}
		for (i = 0; i < n; i++){
			scanf("%d %d %d", &a, &b, &c);
			array[a][b] = array[b][a] = c;
			m = max(m, b);
		}
		m++;
		for (i = 0; i < m; i++){
			for (j = 0; j < m; j++){
				for (k = 0; k < m; k++){
					array[j][k] = array[k][j] = min(array[j][k], array[j][i] + array[i][k]);
				}
			}
		}
		for (i = 0; i < m; i++){
			int cost = 0;
			for (j = 0; j < m; j++){
				cost += array[i][j];
			}
			if (cost < ans_cost){
				ans_cost = cost;
				ans_map = i;
			}
		}
		printf("%d %d\n", ans_map, ans_cost);
	}
}