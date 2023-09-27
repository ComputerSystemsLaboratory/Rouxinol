
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1130&lang=jp

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

int W,H;

void dfs(vector<string> &field, vector<vector<bool> > &move,int now_x, int now_y)
{
	int dx[4] = {1,0,-1,0};
	int dy[4] = {0,1,0,-1};

	if(now_x < 0 || now_x >= W || now_y < 0 || now_y >= H){ return; }
	
	if(field[now_y][now_x] == '#'){ return; }

	if(move[now_y][now_x]){ return; }

	move[now_y][now_x] = true;

	rep(i,4){
		dfs(field, move, now_x+dx[i], now_y+dy[i]);
	}

	return;
}

int main() {

	while(cin >> W >> H && W && H)
	{

		vector<string> field(H);
		vector<vector<bool> > move(H, vector<bool>(W,false));

		rep(y,H){
			cin >> field[y];
		}

		pair<int, int> start;
		rep(y,H){
			rep(x,W){
				if(field[y][x] == '@'){start = make_pair(x,y);}
			}
		}

		
		dfs(field, move, start.first, start.second);

		int count=0;
		rep(y,H){
			rep(x,W){
				if(move[y][x]){ count++; }
			}
		}

		cout << count << endl;

	}
	return 0;
}