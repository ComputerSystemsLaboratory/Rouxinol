#include <iostream>
using namespace std;
#define FOR(i,a) for(int i=0;i<a;i++)
int a[21][21];
int main() {
	while(1){
		int n;
		cin>>n;
		if(n==0){break;}
		FOR(i,21){FOR(j,21){a[i][j]=0;}}
		FOR(i,n){int d,f;cin>>d>>f;a[f][d]++;}
		int m;
		cin>>m;
		int x=10;int y=10;
		a[10][10]=0;
		FOR(i,m){
			char p;int move;
			cin>>p>>move;
			int h;
			int dx[4]={1,0,-1,0};
			int dy[4]={0,1,0,-1};
			if(p=='N'){h=0;}
			else if(p=='E'){h=1;}
			else if(p=='S'){h=2;}
			else if(p=='W'){h=3;}
			FOR(j,move){
				x+=dx[h];y+=dy[h];
				a[x][y]=0;
			}
		}
		int ans=0;
		FOR(i,21){FOR(j,21){if(a[i][j]!=0){ans++;}}}
		if(ans==0){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
	}
	return 0;
}