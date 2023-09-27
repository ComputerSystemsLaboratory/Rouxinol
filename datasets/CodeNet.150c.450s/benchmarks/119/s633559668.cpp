#include <bits/stdc++.h>
using namespace std;

int state[100][100];
bool reached[100][100];
int w,h;

int dx[8]={1,0,-1,0,1,-1,1,-1};
int dy[8]={0,1,0,-1,1,1,-1,-1};

void dfs(int x, int y) {

	if(x==0 || h<x || y==0 || w<y || state[x][y] == 0)
		return;
	if(reached[x][y] == true)
		return;

	reached[x][y]=true;

	for(int i=0; i<8; i++) {
		dfs(x+dx[i],y+dy[i]);
	}
}

int main() {

	while(1){
		cin >> w >> h;
		if(w==0 && h==0) {
			return 0;
		}
		memset(state, 0, sizeof(state));
		memset(reached, false, sizeof(reached));
		for(int i=1; i<=h; i++) {
			for(int j=1; j<=w; j++) {
				cin >> state[i][j];
			}
		}
		int count=0;
		for(int i=1; i<=h; i++) {
			for(int j=1; j<=w; j++) {
				if(reached[i][j]==true || state[i][j] == 0)
					continue;
				else{
					dfs(i,j);
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}

