#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 1000000000;
const int MOD = 1000000007;

int ans;
int ma[100][100];
int w, h;

void rec(int y, int x);

int main(void) {
	while(1){
		ans = 0;
		cin >> w >> h;
		if(w == 0 && h == 0) break;

		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				int t;
				cin >> t;
				ma[i][j] = t;
			}
		}

		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				if(ma[i][j] == 1){
					ans++;
					rec(i, j);
				}
			}
		}
		printf("%d\n", ans);

	}
	
	return 0;
}

void rec(int y, int x){
	for(int i=-1; i<=1; i++){
		for(int j=-1; j<=1; j++){
			if(i == 0 && j == 0) continue;

			int ny = y+i;
			int nx = x+j;
			if(ny >= 0 && ny < h && nx >= 0 && nx < w && ma[ny][nx] == 1){
				ma[ny][nx] = 0;
				rec(ny, nx);
			}
		}
	}
}