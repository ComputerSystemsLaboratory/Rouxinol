#include <cstdio>
#include <queue>
#include <vector>
#include <string>
using namespace std;

typedef pair<int, int> P;
vector<P> v(10);

int h, w, n;
char map[1000][1001];

const int INF = 100000000;
int d[1000][1000];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int bfs(int t){
	queue<P> que;
	for(int i=0; i<w; i++){
		for(int j=0; j<h; j++){
			d[j][i] = INF;
		}
	}
	que.push(v[t]);
	d[v[t].first][v[t].second] = 0;
	while(que.size()){
		P p = que.front(); que.pop();
		if(p.first == v[t+1].first && p.second == v[t+1].second) break;
		for(int i=0; i<4; i++){
			int nx = p.second + dx[i], ny = p.first + dy[i];

			if(0 <= nx && nx < w && 0 <= ny && ny < h && map[ny][nx] != 'X' && d[ny][nx] == INF){
				que.push(P(ny, nx));
				d[ny][nx] = d[p.first][p.second] + 1;
			}
		}
	}
	return d[v[t+1].first][v[t+1].second];
}

void solve(){
	scanf("%d %d %d", &h, &w, &n);
	for(int i=0; i<h; i++){
		scanf("%s", map[i]);
	}
	for(int i=0; i<w; i++){
		for(int j=0; j<h; j++){
			if(map[j][i] == 'S') v[0] = (P(j, i));
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<w; j++){
			for(int k=0; k<h; k++){
				if(map[k][j] - '0' == i+1){
					v[i+1] = (P(k, j));
				}
			}
		}
	}
	int ans = 0;
	for(int i=0; i<n; i++){
		ans += bfs(i);
	}
	printf("%d\n", ans);
}

int main(){
	solve();
	return 0;
}