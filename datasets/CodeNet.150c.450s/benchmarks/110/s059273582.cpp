#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> P;
char maze[1005][1005];
int d[1005][1005];
int dirx[4] = {0, -1, 0, 1};
int diry[4] = {1, 0, -1, 0};
int h, w, n, hard; 
int si, sj;
const int INF = 1<<30;
int tot = 0; 

void BFS(int ai, int aj){
	queue<P> que;
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			d[i][j] = INF;
		}
	}
	que.push(P(ai, aj));
	d[ai][aj] = 0;
	while(!que.empty()){
		P a = que.front();
		que.pop();
		int x = a.first, y = a.second;
		if(maze[x][y]-'0' == hard){
			tot += d[x][y];
			si = x; sj = y;
			break;
		}
		for(int i = 0; i < 4; i++){
			int dx = x+dirx[i], dy = y+diry[i];
			if(dx>=0 && dx<h && dy>=0 && dy<w && maze[dx][dy]!='X' && d[dx][dy]==INF){
				d[dx][dy] = d[x][y]+1;
				que.push(P(dx, dy));
			}
		}
	}
}

int main(int argc, char const *argv[]){
	while(scanf("%d%d%d", &h, &w, &n) != EOF){
		getchar();
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				scanf("%c", &maze[i][j]);
				if(maze[i][j] == 'S'){
					si = i; sj = j;
				}
			}
			getchar();
		}
		tot = 0;
		hard = 1;
		for(int i = 0; i < n; i++){
			BFS(si, sj);
			hard++;
		}
		cout << tot << endl;
	}
	return 0;
}