#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define rep(I,N) for(int I = 0; I < (int)(N); I++)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
struct Data{
	int hp, x, y, cost;
	Data(int _hp, int _x, int _y, int _cost){
		hp = _hp;
		x = _x;
		y = _y;
		cost = _cost;
	}
	Data(){}
};
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int w, h, n, sx, sy;
int gx[11], gy[11];
int memo[11][1001][1001];
string maze[1001];

int main(void){
	fill_n(**memo, 11*1001*1001, INF);
	cin >> h >> w >> n;
	rep(i, h){
		cin >> maze[i];
		rep(j, w){
			if(maze[i][j] == 'S'){
				sx = j;
				sy = i;
				break;
			}else if(maze[i][j] != 'X' && maze[i][j] !='.'){
				gx[maze[i][j]-'0'] = j;
				gy[maze[i][j]-'0'] = i;
			}
		}
	}
	queue<Data> que;
	que.push(Data(1, sx, sy, 0));
	while(!que.empty()){
		Data data = que.front();que.pop();
		int x = data.x;
		int y = data.y;
		int hp = data.hp;
		int cost = data.cost;
		if(maze[y][x]-'0' == hp)hp++;
		if(hp == n+1){
			FIN(cost);
			break;
		}
		if(memo[hp][y][x] <= cost)continue;
		memo[hp][y][x] = cost;
		rep(i, 4){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx < 0 || ny < 0 || nx >= w || ny >= h || maze[ny][nx] == 'X')continue;
			que.push(Data(hp, nx, ny, cost+1));
		}
	}

	return 0;
}



int StrToInt(string s){
	stringstream ss;
	ss << s;
	int val;
	ss >> val;
	return val;
}
string IntToStr(int i){
	stringstream ss;
	ss << i;
	return ss.str();
}