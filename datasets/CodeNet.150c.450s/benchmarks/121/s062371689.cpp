#include <iostream>
#include <string>

#define reep(i,n,m) for(int i=(n);i<(m);i++)
#define rep(i,n) reep(i,0,n)

using namespace std;

const int dx[] = {0,0,1,-1};
const int dy[] = {1,-1,0,0};

int H,W;
string fld[110];

void dfs(bool flg[110][110], int x, int y, char f){
	if(flg[y][x]){
		return;
	}
	if(f!=fld[y][x]){
		return;
	}

	flg[y][x] = true;
	rep(i,4){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(ny<0||ny>=H||nx<0||nx>=W){
			continue;
		}
		dfs(flg,nx,ny,f);
	}
}

int main(){
	while(cin >> H >> W, H){
		rep(i,H){
			cin >> fld[i];
		}

		bool flg[110][110] = {0};
		int ans = 0;
		rep(y,H){
			rep(x,W){
				if(flg[y][x]){
					continue;
				}
				ans++;
				dfs(flg,x,y,fld[y][x]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}