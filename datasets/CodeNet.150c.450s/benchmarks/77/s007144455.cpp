#include <iostream>
#include <cstdio>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
#define rep1(i,n) for(int i=1;i<=(n);++i)
#define all(c) (c).begin(),(c).end()
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int main(){
	while(true){
		int n,m;
		scanf("%d",&n);
		if(n==0) break;
		bool v[21][21]={},j[21][21]={};
		rep(i,n){
			int x,y;
			scanf("%d%d",&x,&y);
			j[x][y]=1;
		}
		scanf("%d",&m);
		v[10][10]=1;
		int nx=10,ny=10;
		rep(i,m){
			char c;
			int d,h;
			cin >> c >> d;
			if(c=='E') h=0;
			if(c=='N') h=1;
			if(c=='W') h=2;
			if(c=='S') h=3;
			rep(k,d) nx+=dx[h],ny+=dy[h],v[nx][ny]=1;
		}
		bool ok=true;
		rep(i,21) rep(k,21) if(j[i][k] && !v[i][k]) ok=false;
		cout << (ok ? "Yes\n" : "No\n");
	}
}