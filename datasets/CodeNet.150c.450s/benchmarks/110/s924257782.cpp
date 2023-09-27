#include <bits/stdc++.h>

using namespace std;

struct Node{
	int x,y,t;
	Node(int x_,int y_,int t_){
		x = x_;
		y = y_;
		t = t_;
	}
};

int H,W,N;
int area[1001][1001];
bool memo[1001][1001];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int bfs(int sx,int sy,int HP){
	fill_n(*memo,1001*1001,0);
	queue<Node> Q;
	Q.push(Node(sx,sy,0));
	int ret;

	while(!Q.empty()){
		int X,Y,T;
		Node node = Q.front();
		X = node.x;
		Y = node.y;
		T = node.t;
		Q.pop();
		if(area[X][Y] == HP){
			ret = T;
			break;
		}
		if(memo[X][Y] == 1)continue;
		memo[X][Y] = 1;
		for(int i = 0;i < 4;i++){
			int nx = X + dx[i];
			int ny = Y + dy[i];
			if(nx < 0 || ny < 0 || nx >= W || ny >= H)continue;
			if(area[nx][ny] == -1)continue;
			Q.push(Node(nx,ny,T+1));
		}
	}
	return ret;
}

int main(){
	fill_n(*area,1001*1001,0);
	int sx[10];
	int sy[10];
	char c;
	int ans = 0;
	cin >> H >> W >> N;
	for(int i = 0;i < H;i++){
		for(int j = 0;j < W;j++){
			cin >> c;
			if(c == 'X'){
				area[j][i] = -1;
			}else if(c == '.'){
				area[j][i] = 0;
			}else if(c == 'S'){
				area[j][i] = 0;
				sx[0] = j;
				sy[0] = i;
			}else{
				area[j][i] = c - '0';
				sx[c - '0'] = j;
				sy[c - '0'] = i;
			}
		}
	}
	for(int i = 0;i < N;i++){
		ans += bfs(sx[i],sy[i],i+1);
	}
	cout << ans << endl;
}