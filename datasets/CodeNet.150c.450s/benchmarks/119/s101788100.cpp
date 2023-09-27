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

#define MAX_W 50
#define MAX_H 50

int w, h;
int maze[MAX_H][MAX_W];

int dx[] = { 0, 1, 0, -1, 1, 1, -1, -1 };
int dy[] = { 1, 0, -1, 0, 1, -1, 1, -1 };

vector<int> ans_list;

void solve(int x, int y){

	maze[y][x] = 0;

	for (int i = 0; i < 8; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < w && ny >= 0 && ny < h && maze[ny][nx] == 1)
			solve(nx, ny);
	}

}

int main(){

	while (true){
	
		cin >> w >> h;
		if (w == 0 && h == 0)
			break;

		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				cin >> maze[i][j];
			}
		}

		int ans = 0;

		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				if (maze[i][j] == 1){
					solve(j, i);
					ans++;
				}
			}
		}
	
		ans_list.push_back(ans);

	}

	for (int i = 0; i < ans_list.size(); i++){
		cout << ans_list[i] << endl;
	}

	return 0;

}