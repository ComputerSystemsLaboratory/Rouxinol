#include<iostream>
using namespace std;

int h,w;
char p[101][101];

void dfs(int x,int y){
	char c=p[x][y];
	p[x][y]='0';
	int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
	for(int k=0;k<4;++k){
		if(0<x+dx[k]&&x+dx[k]<=h&&0<y+dy[k]&&y+dy[k]<=w&&p[x+dx[k]][y+dy[k]]==c){
			dfs(x+dx[k],y+dy[k]);
		}
	}
}

int main(){
	while(true){
		int n=0;
		cin>>h>>w;
		if(h==0&&w==0){
			break;
		}
		for(int i=1;i<=h;++i){
			for(int j=1;j<=w;++j){
				cin>>p[i][j];
			}
		}
		for(int i=1;i<=h;++i){
			for(int j=1;j<=w;++j){
				if(p[i][j]!='0'){
					dfs(i,j);
					++n;
				}
			}
		}
		cout<<n<<endl;
	}
}