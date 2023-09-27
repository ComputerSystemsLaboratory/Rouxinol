#include <queue>
#include <cstdio>
#include <algorithm>

#define MAX_H 1000
#define MAX_DIS 1000000

using namespace std;

typedef pair<int,int> P;

int H,W,N;
char board[MAX_H][MAX_H];
int dis[MAX_H][MAX_H];

int si,sj,gv;

int vx[4] = {1,-1,0,0};
int vy[4] = {0,0,1,-1};

void solve(){
	queue<P> que;
	int sum=0,n=1,value=0;
	
	while(n<=N){
	
		que.push(P(si,sj));
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				dis[i][j] = MAX_DIS;
			}
		}
		dis[si][sj] = value;
		
		
		int qx,qy;
		while(1){
			P v = que.front(); que.pop();
			qx = v.first;
			qy = v.second;
			
			if(board[qx][qy] == '0'+(char)n) break;
			for(int i=0;i<4;i++){
				int pi,pj;
				pi = qx+vx[i];
				pj = qy+vy[i];
				if(-1<pi&&pi<H&&-1<pj&&pj<W&&board[pi][pj]!='X'&&dis[qx][qy]+1<dis[pi][pj]){
					dis[pi][pj] = dis[qx][qy]+1;
					que.push(P(pi,pj));
				}
			}
		}
		si = qx; sj = qy;
		value = dis[qx][qy];
		while(!que.empty()) que.pop();
		n++;
	}
	
	printf("%d\n",value);
}
	


int main(){
	scanf("%d %d %d",&H,&W,&N);
	
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			char c;
			scanf(" %c",&c);
			board[i][j] = c;
			if(c=='S'){
				si = i; sj = j;
			}
		}
	}
	
	solve();
	
	return 0;
}