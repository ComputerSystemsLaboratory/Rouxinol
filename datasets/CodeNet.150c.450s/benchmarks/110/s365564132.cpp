#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
struct P{
	int x,y;//縦,横
};

char f[2000][2000];//フィールド
int H,W,N;
const int INF=100000000;
P chpt[10];
int t[2000][2000];//縦、横
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

int main(){
	cin>>H>>W>>N;
	for(int i=0;i<H;i++){//縦
		cin>>f[i];
		for(int j=0;j<W;j++){//横
			if(f[i][j]=='S')	{chpt[0].x=i;chpt[0].y=j;}
			if(f[i][j]>48&&f[i][j]<58) {
				int n=f[i][j]-48;
				chpt[n].x=i;chpt[n].y=j;
			}
		}
	}
	int ans=0;//答えの時間
	for(int n=0;n<N;n++){//最短距離を求める
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				t[i][j]=INF;
			}
		}
		queue<P> nextp;
		P start={chpt[n].x,chpt[n].y};
		nextp.push(start);
		t[start.x][start.y]=0;
		
		while(!nextp.empty()){
			P cpt=nextp.front();
			nextp.pop();
			for(int i=0;i<4;i++){
				int nx=cpt.x+dx[i],ny=cpt.y+dy[i];
				if(nx>=0&&nx<H&&ny>=0&&ny<W&&f[nx][ny]!='X'&&t[nx][ny]==INF){
					t[nx][ny]=t[cpt.x][cpt.y]+1;
					P npt={nx,ny};
					nextp.push(npt);
				}
			}
		}
		ans+=t[chpt[n+1].x][chpt[n+1].y];
	}
	cout <<ans<<endl;
}