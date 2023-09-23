#include <bits/stdc++.h>

using namespace std;
 
string str[101];
int H, W, cnt;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
char ch;
 
void dfs(int x, int y)
{
    if (x < 0 || x >= H || y < 0 || y >= W|| ch != str[x][y]) return;
    str[x][y] = '0';
    for (int i = 0; i < 4; i++) {
	int nx = x + dx[i];
	int ny = y + dy[i];
	dfs(nx, ny);
    }  
}
 
int main()
{
    while (cin >> H >> W, H + W) {
	for (int i = 0; i < H; i++) { 
	    cin >> str[i];
	}
	cnt = 0;
	for (int i = 0; i < H; i++) {
	    for (int j = 0; j < W; j++) {
		if (str[i][j] != '0') {
		    ch = str[i][j];
		    dfs(i, j);
		    cnt++;
		}
	    }
	}
	cout << cnt << endl;
    }
    return 0;
}