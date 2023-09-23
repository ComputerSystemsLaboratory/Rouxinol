
#include<iostream>
using namespace std;
static const int MAX = 100;
char M[MAX][MAX + 1];
int h, w;
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
void dfs(int y, int x, char c)
{
	M[y][x] = 'a';
	for (int i = 0; i < 4; i++) {//??£??\4???????????¢?????????????????????a??§?¶?????????????
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (0 <= nx < w && nx < w && 0 <= ny && ny < h && M[ny][nx] == c) {
			dfs(ny, nx, c);
		}
	}
}


int main()
{
	while (cin >> h >> w, !(w==0 && h==0)) {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> M[i][j];
			}
		}
		int counter = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (M[i][j] == '#' || M[i][j] == '*' || M[i][j] == '@') {
					char c = M[i][j];
					dfs(i, j, c);
					counter++;
				}
			}
		}
		cout << counter << endl;
	}

	
    return 0;
}