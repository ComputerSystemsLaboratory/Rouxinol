#include <iostream>
#include <cstring>
#include <queue>
#include <utility>
#define MAXHW 1000 + 1

using namespace std;
typedef pair<int, int> P;

int n, m, H, W, N, d[MAXHW][MAXHW];
char fac[MAXHW][MAXHW];

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int bfs(int a, int b, int s){
	memset(d, -1, sizeof(d));
	queue<P> q;
	d[a][b] = 0;
	q.push(P(a, b));
	
	while(!q.empty()){
		P p = q.front();
		q.pop();
		
		if(fac[p.first][p.second] == char(s + '0')){
			n = p.first, m = p.second;
			return d[p.first][p.second];
		}
		
		for(int i = 0; i < 4; i++){
			int h = p.first + dy[i];
			int k = p.second + dx[i];
			if(h >= 0 && h < H && k >= 0 && k < W && fac[h][k] != 'X' && d[h][k] == -1){
				d[h][k] = d[p.first][p.second] + 1;
				q.push(P(h, k));
			}
		}
	}
}

int main(){
	int sum = 0;
	scanf("%d %d %d", &H, &W, &N);
	for(int i = 0; i < H; i++){
		for(int j = 0; j < W; j++){
			cin >> fac[i][j];
			if(fac[i][j] == 'S')
				n = i, m = j;
		}
	}
	for(int i = 1; i <= N; i++)
		sum += bfs(n, m, i);
	
	cout << sum << endl;
	return 0;
}
