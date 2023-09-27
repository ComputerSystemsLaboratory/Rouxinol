#include<iostream>
using namespace std;

int dx[4]={0,-1,0,1};
int dy[4]={1,0,-1,0};

char ma[30][30];

int W,H;
int dfs(int nx,int ny){
	if(ma[ny][nx]=='#')return 0;
	ma[ny][nx]='#';
	int re=1;
	for(int i=0;i<4;i++){
		int nex=nx+dx[i],ney=ny+dy[i];
		if(nex>=0 && ney>=0 && nex<W && ney<H)re+=dfs(nex,ney);
	}
	return re;
}


int main(){
	int sx,sy;
	while(cin>>W>>H && W+H){
		for(int i=0;i<H;i++)for(int j=0;j<W;j++){
			cin>>ma[i][j];
			if(ma[i][j]=='@'){sx=j,sy=i;}
		}
		cout<<dfs(sx,sy)<<endl;
	}
	
}