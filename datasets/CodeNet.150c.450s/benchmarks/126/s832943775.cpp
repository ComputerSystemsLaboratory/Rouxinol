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
int dx[2] = {1, 0};
int dy[2] = {0, 1};
char maze[17][17];
struct Data{
	int x, y, cost;
	Data(int xx, int yy, int cc){
		cost = cc;
		x = xx;
		y = yy;
	}
	Data(){}
};
int main(void){
	int w, h, n;
	while(cin >> w >> h, w){
		cin >> n;
		rep(i, 17)rep(j,17)maze[i][j] = '.';
		rep(i, n){
			int x, y;
			cin >> x >> y;
			maze[y-1][x-1] = '#';
		}
		queue<Data> que;
		que.push(Data(0, 0, 0));
		int ans = 0;
		while(!que.empty()){
			Data data = que.front();que.pop();
			int x = data.x;
			int y = data.y;
			if(x == w-1 && y == h-1){
				ans++;
				continue;
			}
			int cost = data.cost;
			rep(i, 2){
				int nx = x + dx[i];
				int ny = y + dy[i];
				if(nx < 0 || ny < 0 || nx >= w || ny >= h || maze[ny][nx] == '#')continue;
				que.push(Data(nx, ny, cost+1));
			}
		}
		FIN(ans);

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