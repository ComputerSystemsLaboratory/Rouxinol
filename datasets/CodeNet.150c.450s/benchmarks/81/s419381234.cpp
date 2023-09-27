#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

#define rep(i, n)for((i) = 0;(i) < (n);++(i))

int G[10][10];

int main(void){
	int i, j, k, n, ma = 12345, x, y, z;
	for(;;){
		scanf("%d", &n);
		if(!n)break;
		rep(i, 10)rep(j, 10)G[i][j] = ma;
		rep(i, 10)G[i][i] = 0;
		rep(i, n){
			scanf("%d%d%d", &x, &y, &z);
			G[x][y] = z;
			G[y][x] = z;
		}
		rep(k, 10)rep(i, 10)rep(j, 10)G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
		pair<int,int> res = make_pair(-1, ma);
		rep(i, 10){
			int sum = 0;
			rep(j, 10)if(G[i][j] != ma)sum += G[i][j];
			if(sum != 0 && res.second > sum)res = make_pair(i, sum);
                        //printf("%d %d\n", i, sum);
		}
		printf("%d %d\n", res.first, res.second);
	}
	return 0;
}