#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int que[1000000][3];
char str[1000][1001],flg[1000][1000]; 
int main(void){
	int i,j,k;
	int x,y,xx,yy,h,w,n,tai,p1,p2;
	int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
	int min,max=1000000;
	cin>>h>>w>>n;
	for(i=0;i<=h;i++){
		for(j=0;j<=w;j++) flg[i][j]=1;
	}
	for(i=0;i<h;i++) cin>>str[i];
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			if(str[i][j]=='S'){
				que[0][0]=i; que[0][1]=j; que[0][2]=0;
				flg[i][j]==0;
			}
		}	
	}
	tai=1; p1=0; p2=0;
	for(i=1;i<=n;i++){
		//cout<<i<<endl;
		if(p2>max) break;
		while(1){
			y=que[p1][0]; x=que[p1][1];
			if(str[y][x]-'0'==tai){
				tai++;
		//		printf("aaaaaaaa\n");
				for(j=0;j<h;j++){
					for(k=0;k<w;k++) flg[j][k]=1;
				}
				flg[y][x]==0;
				que[0][0]=y; que[0][1]=x; que[0][2]=que[p1][2];
				p1=0; p2=0;
				break;
			}
			for(j=0;j<4;j++){
				yy=y+dy[j]; xx=x+dx[j];
				if(yy>=0&&xx>=0&&yy<h&&xx<w&&str[yy][xx]!='X'&&flg[yy][xx]!=0){
					p2++;
					que[p2][0]=yy; que[p2][1]=xx; que[p2][2]=que[p1][2]+1;
					flg[yy][xx]=0;
//					printf("yy=%d xx=%d\n",yy,xx);
				}
			}
			p1++;
			//printf("%d %d\n",p1,p2);
		}
		min=que[p1][2];
	}
	cout<<min<<endl;
	return 0;
}