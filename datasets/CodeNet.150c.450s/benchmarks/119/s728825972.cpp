#include<iostream>
using namespace std;

int dx[8]={0,-1,0,1,1,1,-1,-1};
int dy[8]={1,0,-1,0,1,-1,1,-1};

int ma[60][60];

int W,H;
void dfs(int nx,int ny){
	if(ma[ny][nx]==0)return;
	ma[ny][nx]=0;
	int re=0;
	for(int i=0;i<8;i++){
		int nex=nx+dx[i],ney=ny+dy[i];
		if(nex>=0&&ney>=0&&nex<W &&ney<H)dfs(nex,ney);
	}
}


int main(){
	int sx,sy;
	while(cin>>W>>H && W+H){
		for(int i=0;i<H;i++)for(int j=0;j<W;j++){
			cin>>ma[i][j];
		}
		int ans=0;
		for(int i=0;i<H;i++)for(int j=0;j<W;j++){
			if(ma[i][j]==1){ans++;dfs(j,i);}
		}
		cout<<ans<<endl;
	}
	
}