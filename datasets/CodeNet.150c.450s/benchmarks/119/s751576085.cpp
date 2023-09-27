#include <bits/stdc++.h>
using namespace std;

int main(void){
	int w, h;
	int dx[] = {1,1,0,-1,-1,-1,0,1};
	int dy[] = {0,1,1,1,0,-1,-1,-1};
	while(true){
		cin >> w >> h;
		if(!w&&!h)break;
		vector<int> c[h+2];
		c[0].resize(w+2);
		c[h+1].resize(w+2);
		for(int i = 1; i <= h; ++i){
			c[i].resize(w+2);
			for(int j = 1; j <= w; ++j){
				cin >> c[i][j];
			}
		}
		int ans = 0;
		queue<pair<int, int>> q;
		for(int i = 1; i <= h; ++i){
			for(int j = 1; j <= w; ++j){
				if(c[i][j] == 1){
					q.emplace(i,j);
					ans++;
					c[i][j] = 0;
					while(!q.empty()){
						int x = q.front().first;
						int y = q.front().second;
						q.pop();
						for(int dir = 0; dir < 8; ++dir){
							int nx = x + dx[dir];
							int ny = y + dy[dir];
							if(c[nx][ny]==1){
								q.emplace(nx,ny);
								c[nx][ny]=0;
							}
						}
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
