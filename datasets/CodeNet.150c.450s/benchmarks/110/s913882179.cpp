#include<iostream>
#include<map>
#include<queue>
#include<string.h>

using namespace std;

typedef pair<int,int> P;
queue<P> q;
int sx,sy;
int gx,gy;
int g;
char field[1000][1000];
int d[1000][1000];
int H,W,N;
int hp=1;
int ans=0;

int bfs(){
	memset(d,-1,sizeof(d));
	P p;
	q.push(P(sx,sy));
	d[sx][sy]=0;
	while(q.size()){
		if(q.front().first==gx&&q.front().second==gy) break;
		p=q.front();
		q.pop();
		for(int i=-1;i<=1;i++){
			for(int j=-1;j<=1;j++){
				if((i==0||j==0)&&(i!=0||j!=0)){
					if(p.first+i>=0&&p.first+i<=H-1&&p.second+j>=0&&p.second+j<=W-1&&d[p.first+i][p.second+j]<0){
						if(field[p.first+i][p.second+j]!='X'){
							q.push(P(p.first+i,p.second+j));
							d[p.first+i][p.second+j]=d[p.first][p.second]+1;
						}
					}
				}
			}
		}
		
	}
	return d[gx][gy];
}
int main(){
	cin>>H>>W>>N;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin>>field[i][j];
		}
	}
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			if(field[i][j]=='S')
			{
				sx=i;
				sy=j;
			}
			if(field[i][j]==49)
			{
				gx=i;
				gy=j;
			}
		}
	}
	ans+=bfs();
	for(int i=0;i<N-1;i++){
		for(int j=0;j<H;j++){
			for(int k=0;k<W;k++){
				if(field[j][k]==49+i)
				{
					sx=j;
					sy=k;
				}
				if(field[j][k]==50+i)
				{
					gx=j;
					gy=k;
				}
			}
		}
		while(q.size()){
			q.pop();
		}
		memset(d,-1,sizeof(d));
		ans+=bfs();
	}

	cout<<ans<<endl;
}