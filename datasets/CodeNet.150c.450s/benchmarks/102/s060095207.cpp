#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;

int dx[4] = {-1, 0 , 1, 0}, dy[4] = {0 , -1, 0, 1};
int w, h;
vector<string> ma;

void rec(int y, int x);

int main(void) {
	while(1){
		cin >> w >> h;
		if(w == 0 && h == 0) break;

		ma = vector<string>();

		for(int i=0; i<h; i++){
			string t;
			cin >> t;
			ma.pb(t);
		}

		int sx, sy;
		for(int i=0; i<h; i++){
			//cout << ma[i] << endl;
			for(int j=0; j<w; j++){
				if(ma[i][j] == '@'){
					ma[i][j] = '.';
					sx = j;
					sy = i;
				}
			}
		}

		rec(sy, sx);

		int ans = 0;
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				if(ma[i][j] == 'o'){
					ans++;
				}
			}
		}

		cout << ans << endl;

	}
	
	return 0;
}

void rec(int y, int x){
	//cout << y << ' ' << x << endl;
	if(ma[y][x] == '.') ma[y][x] = 'o';
	else return;
	int nx, ny;
	for(int i=0; i<4; i++){
		nx = x + dx[i];
		ny = y + dy[i];

		if(nx >= 0 && nx < w && ny >= 0 && ny < h){
			rec(ny, nx);
		}
	}
}