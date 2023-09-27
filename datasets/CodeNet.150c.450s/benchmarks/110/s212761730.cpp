#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>

using namespace std;

typedef long long ll;
const int MAX = 1005;

struct node{
	int first;
	int second;
	int step;
	node(int _first = 0, int _second = 0, int _step = 0): first(_first), second(_second), step(_step){}
};
 

int h, w;
int n;
char map[MAX][MAX];
bool vis[MAX][MAX];
int cnt = 1, ans = 0;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

bool in(int x, int y){
	return x >= 0 && x < h && y >= 0 && y < w;
}


void bfs(node start){
	vis[start.first][start.second] = true;
	queue<node> que;
	que.push(start);
	while(!que.empty()){
		node now = que.front();
		que.pop();
		//cout << now.first << " " << now.second << " " << now.step << endl;
		if(map[now.first][now.second] - '0' == cnt){
			if(cnt == n){
				//cout << now.step << endl;
				ans = now.step;
				return;
			}
			cnt++;
			while(!que.empty()){
				que.pop();
			}
			que.push(node(now.first, now.second, now.step));
			memset(vis, false, sizeof(vis));
		}
		vis[now.first][now.second] = true;
		for (int i = 0; i < 4; i++){
			int xx = now.first + dx[i];
			int yy = now.second + dy[i];
			if(in(xx, yy) && !vis[xx][yy] && map[xx][yy] != 'X'){
				node temp; temp.first = xx; temp.second = yy;
				temp.step = now.step + 1;
				//cout << temp.step << endl;
				vis[xx][yy] = true;
				que.push(temp);
			}
		}
	}
}




int main(){
	cin >> h >> w >> n;
	node start;
	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++){
			cin >> map[i][j];
			if(map[i][j] == 'S'){
				start.first = i; start.second = j;
			}
		}
	}
	start.step = 0;
	bfs(start);
	cout << ans << endl;
	
	return 0;
} 
