#include <cstdio>
#include <cstring>
using namespace std;

int H, W;
int N;
int X[50], Y[50];
int vis[100][100];
void solve(int x, int y){
	if (x > W || y > H) return;
	for (int i = 1; i <= N; i++){
		if (x == X[i] && y == Y[i]) return;
	}
	vis[y][x]++;
	solve(x + 1, y);
	solve(x, y + 1);
}

int main(){
	
	while (1){
		memset(vis, 0, sizeof(vis));
		scanf("%d%d", &W, &H);
		if (W == 0){
			return 0;
		}
		scanf("%d", &N);
		for (int i = 1; i <= N; i++){
			scanf("%d%d", &X[i], &Y[i]);
		}
		solve(1, 1);
		printf("%d\n", vis[H][W]);
	}
}