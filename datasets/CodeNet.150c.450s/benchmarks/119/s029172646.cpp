#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#define INF 10000000
#define PI 3.14159265358979323846
using namespace std;
typedef long long ll;
typedef pair<int, int> p;
typedef vector<int> v;
typedef vector<int, int> v2;
typedef vector< pair<int, int> > vp;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int w, h;
int c[52][52];
int f[52][52];

bool dfs(int y, int x){
	if (c[y][x] == 0) return false;
	if (f[y][x] == 1) return false;
	
	f[y][x] = 1;
	if (y > 0) dfs(y - 1, x);
	if (x > 0) dfs(y, x - 1);
	
	if (y < h) dfs(y + 1, x);
	if (x < w) dfs(y, x + 1);

	if (y > 0 && x > 0) dfs(y - 1, x - 1);
	if (y < h && x > 0) dfs(y + 1, x - 1);
	if (y > 0 && x < w) dfs(y - 1, x + 1);
	if (y < h && x < w) dfs(y + 1, x + 1);

	return true;
}

int main(){
	ios::sync_with_stdio(false);

	while (1){
		cin >> w >>  h;
		if (w == 0 && h == 0) break;

		int ans = 0;

		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				cin >> c[i][j];
			
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				f[i][j] = -1;
		
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				if(dfs(i, j)) ans++;

		cout << ans << endl;

	}

	return 0;
}