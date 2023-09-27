#include <bits/stdc++.h>

using namespace std;

int a,b,n;
bool area[18][18];
bool memo[18][18];
int dx[2] = {0,1};
int dy[2] = {1,0};
int cnt;


void dp(int x,int y){
	fill_n(*memo,18*18,0);
	if(x == a && y == b)cnt++;

	for(int i = 0;i < 2;i++){
		int nx = x + dx[i];
		int ny = y + dy[i];

		if(area[nx][ny])continue;

		dp(nx,ny);
	}
	return;
}

int main(){
	int x,y;
	while (cin >> a >> b >> n,a){
		fill_n(*area,18*18,1);
		cnt = 0;
		for(int i = 1;i <= b;i++){
			for(int j = 1;j <= a;j++){
				area[j][i] = 0;
			}
		}
		for(int i = 0;i < n;i++){
			cin >> x >> y;
			area[x][y]=1;
		}
		dp(1,1);
		cout << cnt << endl;
	}
	return 0;
}