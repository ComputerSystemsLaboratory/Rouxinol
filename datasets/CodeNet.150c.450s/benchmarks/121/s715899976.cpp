#include <iostream>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
int dy[] = {1, 0, 0, -1};
int dx[] = {0, 1, -1, 0};
bool used[110][110];
string s[110];
int h, w;
void dfs(int y, int x, char c){
	rep(i, 4){
		int ny = y + dy[i], nx = x + dx[i];
		if(!(0 <= ny && ny < h && 0 <= nx && nx < w)) continue;
		if(used[ny][nx]) continue;
		if(s[ny][nx] != c) continue;
		used[ny][nx] = true;
		dfs(ny, nx, c);
	}
	return;
}
int main(void){
	while(1){
		cin >> h >> w;
		if(h == 0 && w == 0) return 0;
		rep(i, 110)rep(j, 110) used[i][j] = false;
		int cnt = 0;
		rep(i, h){
			cin >> s[i];
		}
		rep(i, h)rep(j, w){
			if(!used[i][j]){
				cnt++;
				used[i][j] = true;
				dfs(i, j, s[i][j]);
			}
		}
		cout << cnt << endl;
	}
}