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
int dx[4] = {  0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };

int w, h;
char c[21][21];

int bfs(int y, int x){
	int sum = 1;
	for (int i = 0; i < 4; i++){
		int nx = x + dx[i], ny = y + dy[i];
		if (0 <= nx && nx < w && 0 <= ny && ny < h && c[ny][nx] == '.'){
			c[ny][nx] = '#';
			sum += bfs(ny, nx);
		}
	}
	
	return sum;
}

int main(){
	ios::sync_with_stdio(false);

	while (1){
		cin >> w >> h;
		if (w == 0 && h == 0) break;

		int sx,sy;
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++){
				cin >> c[i][j];
				if (c[i][j] == '@'){
					sy = i;
					sx = j;
				}
			}		

		cout << bfs(sy, sx) << endl;
	}
	return 0;
}