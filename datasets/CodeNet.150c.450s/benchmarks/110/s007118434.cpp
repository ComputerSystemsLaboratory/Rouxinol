#include <cstdio>
#include <iostream>
#include <queue>
#include <map>  
using namespace std;
int ans = 0;

typedef pair<int,int >P;
int gh=0, gw=0;
char c[1000][1000];
int d[1000][1000];
int mh[4] = { 1,0,-1,0 };
int mw[4] = { 0,1,0,-1 };
char hijou[9] = { '1','2','3','4','5','6','7','8','9' };
void judge(int h, int w, int g) {
	queue<P> que;
	que.push(P(h,w));
	while (que.size()) {
		P p = que.front(); que.pop();
		if (c[p.first][p.second] == hijou[g])
		{
			gh = p.first;
			gw = p.second;
			ans+=d[p.first][p.second];
			break;
		}
		for (int i = 0; i < 4; i++) {
			int  nh = p.first + mh[i];
			int  nw = p.second + mw[i];
			if (nh >= 0 && nh < 1000 && nw >= 0 && nw < 1000 && d[nh][nw] == 500000 && c[nh][nw] != 'X') {
				d[nh][nw] = d[p.first][p.second] + 1;
				que.push(P(nh, nw));
			}
		}
	}
}
int main() {
	int h, w, n,sh,sw;
	for (int i = 0; i < 1000;i++){
		for (int j = 0; j < 1000; j++)
		{
			c[i][j] = 'X'; 
		}
	}
	cin >> h >> w >> n;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w;j++){
			cin >> c[i][j];
			if (c[i][j] == 'S') { sh = i; sw = j; }
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 1000; j++) {
			for (int k = 0; k < 1000; k++)
				d[j][k] = 500000;
		}
	
		d[sh][sw] = 0;
		judge(sh, sw, i);
		sh = gh; sw = gw;
}
	cout << ans << endl;

 	return 0;
}