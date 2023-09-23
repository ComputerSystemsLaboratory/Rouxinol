#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
char q[101][101];
int n, m;
int d[4] = { 0,1, 0, -1 };
int s[4] = { 1, 0, -1, 0 };
void dfs(int x, int y, char c){
	q[x][y] = '1';
	for (int i = 0; i < 4; i++){
		int nx = d[i] + x;
		int ny = s[i] + y;
		if (0 <= nx <= n && 0 <= ny <= m&&q[nx][ny] == c){ dfs(nx, ny, q[nx][ny]); }
	}
}
int main(){
	

	while (1){
		int res = 0;
		cin >> n >> m;
		if (n == 0 && m == 0)break;
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				cin >> q[i][j];
			}
			getchar();
		}
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				if (q[i][j] != '1'){ 
					dfs(i, j, q[i][j]); res++;
				}
			}
		}
		cout << res << endl;

	}
	return 0;
}