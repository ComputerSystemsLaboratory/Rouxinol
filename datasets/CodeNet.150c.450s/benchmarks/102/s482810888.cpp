#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
using namespace std;

typedef pair<int, int> P;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0,  -1};

int sx, sy;
int ans;
int w, h;
vector<string> ma;

void BFS(){
	queue<P> que;
	que.push(P(sy, sx));
	ans++;

	while(que.size()){
		P p = que.front(); que.pop();

		for(int i=0; i<4; i++){
			int ny = p.first + dy[i];
			int nx = p.second + dx[i];

			if(ny >= 0 && ny < h && nx >= 0 && nx < w && ma[ny][nx] == '.'){
				ans++;
				ma[ny][nx] = '#';
				que.push(P(ny, nx));
			}
		}

	}

}

int main(void){
	while(1){
		ma.clear();
		ans = 0;
		cin >> w >> h;
		if(w == 0 && h == 0) break;

		for(int i=0; i<h; i++){
			string tmp;
			cin >> tmp;

			ma.push_back(tmp);
		}

		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				if(ma[i][j] == '@' ){
					sy = i;
					sx = j;
				}

			}
		}

		BFS();

		cout << ans << endl;


	}


	return 0;
}