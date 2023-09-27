#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int dx[]={-1,0,1,-1,1,-1,0,1};
int dy[]={-1,-1,-1,0,0,1,1,1};

int w,h,cnt,l[50][50];

void f(int x,int y){
	l[y][x]=0;
	for(int i=0;i<8;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=0&&nx<w&&ny>=0&&ny<h&&l[ny][nx]==1)f(nx,ny);
	}
}

int main(){
	while(cin>>w>>h,w||h){
		cnt=0;
		for(int i=0;i<w*h;i++)cin>>l[i/w][i%w];
		for(int i=0;i<w*h;i++)if(l[i/w][i%w]==1){cnt++;f(i%w,i/w);}
		cout<<cnt<<endl;
	}
}