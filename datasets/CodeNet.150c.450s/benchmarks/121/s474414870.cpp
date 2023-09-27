#include <iostream>
using namespace std;

const int MAX_N = 100;
const int MAX_M = 100;

int n, m;
char field[MAX_N][MAX_M];
int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};
int ans = 0;

void dfs(int x, int y, const char mark){
	field[x][y] = '.';
	
	for(int i = 0; i < 4; i++){
		int nx = x + dx[i], ny = y + dy[i];
		if(nx >= 0 && nx < n && ny >= 0 && ny < m && field[nx][ny] == mark){
			dfs(nx, ny, mark);
		}
	}
}

void solve(){
	//多&#31181;&#27979;&#35797;情况&#36755;入用&#36825;个方法while(cin >> n >> m && n > 0) 
	while(cin >> n >> m && n > 0){
		ans = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin>>field[i][j];
			}
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(field[i][j] != '.'){
					ans++;
					dfs(i, j, field[i][j]);
				}
			}
		}
		cout << ans << "\n";
	}
}

int main(){
	solve();
}