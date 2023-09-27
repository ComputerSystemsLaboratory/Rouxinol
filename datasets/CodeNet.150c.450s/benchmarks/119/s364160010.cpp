#include<bits/stdc++.h>
using namespace std;
int w,h,mp[50][50],
	dy[8]={-1,-1,0,1,1,1,0,-1},
	dx[8]={0,1,1,1,0,-1,-1,-1};
void func(int x,int y){
	mp[y][x]=0;
	for(int i=0;i<8;i++){
		int xx=x+dx[i],yy=y+dy[i];
		if(xx>=0&&xx<w&&yy>=0&&yy<h&&mp[yy][xx]) func(xx,yy);
	}
}
int main(void){
	while(1){
		cin>>w>>h;
		if(w==0&&h==0)break;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++) cin>>mp[i][j];
		}
		int cnt=0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(mp[i][j]==1){
					cnt++;
					func(j,i);
				}
			}
		}
		cout<<cnt<<endl;
	}
}
