#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <queue>
#include <map>

using namespace std;


#define F first
#define S second
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define INT(a) int((a)+1e-9)
#define SUPMaxX 22
#define SUPMaxY 22

typedef pair<int,int> Pii;

int DX[4]={1,0,-1,0};
int DY[4]={0,1,0,-1};

int maxX,maxY;
char tizu[SUPMaxX][SUPMaxY];
queue<Pii> ps;

int solve(){
	int re=1;
	while(!ps.empty()){
		Pii p=ps.front();
		ps.pop();
		int px=p.F;
		int py=p.S;
		FOR(i,0,4){int qx=px+DX[i]; int qy=py+DY[i];
			if(tizu[qx][qy]=='.'){
				tizu[qx][qy]='@';
				ps.push(make_pair(qx,qy));
				re++;
			}
		}
	}
	return re;
}


int main(){
	while(true){
		cin >> maxY >> maxX;			if(!maxX) return 0;
		FOR(x,0,maxX+2) FOR(y,0,maxY+2) tizu[x][y]='#';
		FOR(x,1,maxX+1) FOR(y,1,maxY+1){
			cin>>tizu[x][y];
			if(tizu[x][y]=='@') ps.push(make_pair(x,y));
		}
		cout<<solve()<<endl;
	}
}