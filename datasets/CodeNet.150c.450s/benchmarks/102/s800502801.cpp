#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <fstream>
#include <queue>

#pragma warning( disable: 4996 )

using namespace std;

typedef long long ll;

#define INF 100000000
#define EPS 1e-9

#define MAX_N 50
#define MAX_R 50

#define MAX_W 20
#define MAX_H 20

int W, H;
int ans[100000];
int C = 0;
char maze[MAX_W][MAX_H];

void dfs(int sx, int sy){
	
	maze[sy][sx] = '#';

	int dx[] = { 1, 0, -1, 0 };
	int dy[] = { 0, 1, 0, -1 };

	for (int i = 0; i < 4; i++){
		int nx = sx + dx[i];
		int ny = sy + dy[i];
		if (nx >= 0 && nx < W && ny >= 0 && ny < H && maze[ny][nx] != '#'){
			ans[C]++;
			dfs(nx, ny);
		}
	}

}

int main(){

	while (true){
		cin >> W >> H;
		if (W == 0 && H == 0){
			break;
		}
		int sx;
		int sy;
		for (int i = 0; i < H; i++){
			for (int j = 0; j < W; j++){
				cin >> maze[i][j];
				if (maze[i][j] == '@'){
					sx = j;
					sy = i;
				}
			}
		}

		ans[C] = 1;
		dfs(sx,sy);
		C++;

	}

	for (int i = 0; i < C; i++){
		cout << ans[i] << endl;
	}


	return 0;

}