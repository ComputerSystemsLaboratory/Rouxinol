#include <bits/stdc++.h>

using namespace std;

#define llong long long 
typedef struct data{
	int h;
	int w;
	int t;
}data;
int H, W, N;
int HP = 1;
int cost = 0;
int area[1000][1000];
bool cannnot[1000][1000];
bool check[1000][1000];
int nh[4] = {1, 0, -1, 0};
int nw[4] = {0, 1, 0, -1};
pair<int, int> start;
queue<data> q;

void solve(pair<int, int> p){
	data fd;
	fd.h = p.first;
	fd.w = p.second;
	fd.t = 0;

	q.push(fd);

	while(HP <= N){
		data sd = q.front(); q.pop();
		int nowh = sd.h;
		int noww = sd.w;
		if(area[nowh][noww] == HP){
			cost += sd.t;
			while(!q.empty()){
				q.pop();
			}
			HP++;
			data now;
			now.h = sd.h;
			now.w = sd.w;
			now.t = 0;
			q.push(now);
			fill_n(*check, 1000 * 1000, false);
		}else{
			for(int i = 0; i < 4; i++){
				data next;
				next.h = nowh + nh[i];
				next.w = noww + nw[i];
				next.t = sd.t + 1;
				if(next.h < 0 || next.w < 0 || next.h >= H || next.w >= W) continue;
				if(cannnot[next.h][next.w] || check[next.h][next.w]) continue;

				check[next.h][next.w] = true;
				q.push(next);
			}
		}
	}

	return;
}

int main(){
	fill_n(*area, 1000 * 1000, 0);
	fill_n(*check, 1000 * 1000, false);
	fill_n(*cannnot, 1000 * 1000, false);
	cin >> H >> W >> N;
	for(int i = 0; i < H; i++){
		for(int j = 0; j < W; j++){
			char in;
			cin >> in;
			if(in == 'S') start = make_pair(i, j);
			if(1 <= (int)in - 48 && (int)in - 48 <= 9) area[i][j] = (int)in - 48;
			if(in == 'X') cannnot[i][j] = true;
		}
	}

	solve(start);
	cout << cost << endl;
	return 0;
}