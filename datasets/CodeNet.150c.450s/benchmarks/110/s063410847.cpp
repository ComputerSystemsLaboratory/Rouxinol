#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
typedef pair<int,int> P;

char d[1000][1000];
int data[1000][1000];
int h,w,n;
int sx[4]={1,0,-1,0};
int sy[4]={0,-1,0,1};

int check(int x1,int y1,int x2,int y2){
	for(int i=0;i<h;i++)for(int j=0;j<w;j++)data[i][j]=-1;
	data[y1][x1]=0;
	queue<P> q;
	q.push(P(x1,y1));
	while(q.size()){
		P p=q.front();q.pop();
		for(int i=0;i<4;i++){
			int x=p.first+sx[i],y=p.second+sy[i];
			if(x<0||x>=w||y<0||y>=h)continue;
			if(d[y][x]=='X'||data[y][x]>=0)continue;
			q.push(P(x,y));
			data[y][x]=data[p.second][p.first]+1;
			if(x==x2&&y==y2)return data[y][x];
		}
	}
}

int main(){
	int x[10],y[10];
	scanf("%d%d%d",&h,&w,&n);
	for(int i=0;i<h;i++){
		scanf("%s",d[i]);
		for(int j=0;j<w;j++){
			if(d[i][j]=='S'){ x[0]=j,y[0]=i;}
			if(48<d[i][j]&&d[i][j]<58){ x[d[i][j]-48]=j,y[d[i][j]-48]=i;}
		}
	}
	int res=0;
	for(int i=0;i<n;i++) res+=check(x[i],y[i],x[i+1],y[i+1]);
	printf("%d\n",res);
}