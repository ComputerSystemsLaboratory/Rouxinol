#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef pair<int, int> P;

int w, h;
int data[50][50];	//data[row][col]

bool isRange(int r, int c) {
	return (r >= 0 && r < h && c >= 0 && c < w);
}

int main() {
	while (cin >> w >> h) {
		if (!w) break;
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				cin >> data[i][j];
		
		int ans = 0;
		bool used[50][50] = {false};
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (!data[i][j] || used[i][j]) continue;
				ans++;
				
				//nurima-su (i, j) kara ikeru masu wo by bfs.
				queue<P> que;	//row, col
				que.push(P(i, j));
				while (!que.empty()) {
					int r = que.front().first;
					int c = que.front().second;
					que.pop();
					
					if (used[r][c]) continue;	//itidosika sirabenai (edakari)
					used[r][c] = true;	//visit
					
					for (int dr = -1; dr <= 1; dr++) {
						for (int dc = -1; dc <= 1; dc++) {
							if (dr == 0 && dc == 0) continue;
							if (!isRange(r + dr, c + dc) || !data[r + dr][c + dc]) continue;	//ikeruka hantei
							que.push(P(r + dr, c + dc));
						}
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}