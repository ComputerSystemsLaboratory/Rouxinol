#include <iostream>
#include <cstring>
#include <string>
#include <queue>
#include <algorithm>

#define MAX_H 1000
#define MAX_W 1000
char m[MAX_H+2][MAX_W+2];
int mindist[MAX_H+2][MAX_W+2];
const int INF = MAX_H*MAX_W*2;
int d[][2] = {1,0, -1,0, 0,1, 0,-1};
using namespace std;

int bfs(int &sx, int &sy, int power){
	//init
	for(int i = 0; i < MAX_H+2; ++i){
		for(int j = 0; j < MAX_W+2; ++j){
			mindist[i][j] = INF;
		}
	}
	queue<pair<int,int>> q;
	q.push(pair<int,int>(sx,sy));
	mindist[sx][sy] = 0;
	while(true){
		auto p = q.front();
		q.pop();
		int x,y;
		x = p.first;
		y = p.second;
		if(m[x][y]-'0' == power){
			sx = x;
			sy = y;
			return mindist[x][y];
		}
		for(int i = 0; i < 4; ++i){
			int x_ = x+d[i][0];
			int y_ = y+d[i][1];
			if(m[x_][y_] == 'X'){
				continue;
			}
			if(mindist[x_][y_] > mindist[x][y]+1){
				q.push(pair<int,int>(x_, y_));
				mindist[x_][y_] = mindist[x][y]+1;
			}
		}
	}
}

int main(){
	int H, W, N;
	cin >> H >> W >> N;
	memset(m, 'X', sizeof m);
	//read
	cin.ignore();
	for(int i = 0; i < H; ++i){
		string s;
		getline(cin, s);
		for(int j = 0; j < W; ++j){
			m[i+1][j+1] = s.at(j);
		}
	}
	//search start
	int minutes = 0;
	int x, y;
	for(int i = 1; i <= MAX_H; ++i){
		for(int j = 1; j <= MAX_W; ++j){
			if(m[i][j] == 'S'){
				x = i;
				y = j;
			}
		}
	}
	for(int i = 1; i <= N; ++i){
		minutes += bfs(x, y, i);
	}
	cout << minutes << endl;
}