#include <iostream>
#include <cstring>
using namespace std;
#define REP(i,n) for(int i=0; i<(int)(n); i++)

int w,h;
int island[50][50];
int visited[50][50];
const int dx[] = {0,-1,-1,-1,0,1,1,1};
const int dy[] = {-1,-1,0,1,1,1,0,-1};

void umeru(int x, int y){
	
	visited[y][x] = 1;
	//printf("%d,%d\n",x,y);
	REP(k,8){
		int tx = x + dx[k];
		int ty = y + dy[k];
		if( tx<0 || ty<0 || tx>=w || ty>=h )continue;
		if( island[ty][tx]==0 || visited[ty][tx]==1 )continue;
		umeru(tx,ty);
	}
	return;
}
int main(){
	while(cin>>w>>h,w|h){
		int ans = 0;
		memset(visited,0,sizeof(visited));
		REP(i,h)REP(j,w)cin>>island[i][j];
		REP(i,h)REP(j,w)if( island[i][j] && !visited[i][j] ){
			umeru(j,i);
			ans++;
		}
		cout << ans << endl;
	}
	return 0;
}