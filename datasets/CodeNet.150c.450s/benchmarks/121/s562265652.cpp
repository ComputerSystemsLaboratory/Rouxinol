#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct P {
	int x, y;
	P operator+(const P &r) {
		return{ x + r.x,y + r.y };
	}
} P;

int H, W, ans;
char ch[101][101];
bool dp[101][101];
P D[4] = { {-1,0},{0,-1},{0,1},{1,0} };

inline bool imp(P p) {
	if (p.x >= H || p.x < 0 || p.y >= W || p.y < 0)
		return true;
	return false;
}
int rec(P p, char c) {
	if (dp[p.x][p.y] || imp(p) || c != ch[p.x][p.y]) {
		return 0;
	}
	dp[p.x][p.y] = true;
	for (int i = 0; i < 4; i++) {
		rec(p + D[i], c);
	}
	return 1;
}

int main(){
	while (scanf("%d%d", &H, &W), H != 0) {
		ans = 0;
		for (int i = 0; i < H; i++) {
			scanf("%s", ch[i]);
			fill(dp[i], dp[i] + 101, false);
		}
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				ans += rec({ i,j }, ch[i][j]);
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}