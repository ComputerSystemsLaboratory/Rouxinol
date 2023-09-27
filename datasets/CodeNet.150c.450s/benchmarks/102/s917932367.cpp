#include <iostream>
#include <map>
#include <queue>
using namespace std;
typedef pair<int,int> P;

int w, h;
int dx[4] = {1,0,-1,0},dy[4] = {0,1,0,-1};
char cell[20][20];
bool used[20][20];

int main(){
	while(cin >> w >> h){
		if(w == 0 && h == 0) break;
		queue<P> que;
		for(int i = 0; i < 20; i++){
			for(int j = 0; j < 20; j++) used[i][j] = 0;
		}
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				cin >> cell[i][j];
				if(cell[i][j] == '@'){
					que.push(P(i,j));
					used[i][j] = 1;
				}
			}
		}
		while(!que.empty()){
			P p = que.front(); que.pop();
			for(int i = 0; i < 4; i++){
				int px = p.second+dx[i],py = p.first+dy[i];
				if(0<=px&&px<w&&0<=py&&py<h&&cell[py][px]=='.'&&used[py][px]==false){
					used[py][px] = true;
					que.push(P(py,px));
				}
			}
		}
		int ans = 0;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(used[i][j]) ans++;
			}
		}
		cout << ans << endl;
	}
}