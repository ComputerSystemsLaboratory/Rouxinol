#include<iostream>
#include<string>
#include<vector>
#include<string.h>
using namespace std;

int h,w;

int v[50][50];

int dx[8]={0,1,1,1,0,-1,-1,-1};
int dy[8]={-1,-1,0,1,1,1,0,-1};

void calc(int y,int x){
	if(v[y][x]==0) return;
	v[y][x]=0;
	for(int r=0;r<8;r++){
		int nx=x+dx[r],ny=y+dy[r];
		if(nx<0 || ny<0 || nx>=w || ny>=h)
			continue;
		calc(ny,nx);
	}
}


void solve()
{
	memset(v,0,sizeof(v));
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			int t;cin>>t;v[y][x]=t;
		}
	}
	int res=0;

	for(int y=0;y<h;y++)
		for(int x=0;x<w;x++){
			if(v[y][x]==0) continue;
			res++;
			calc(y,x);
		}
		cout<<res<<endl;
}



int main()
{
	while(cin>>w>>h){
		if(w==0) break;
		solve();
	}
	return 0;
}