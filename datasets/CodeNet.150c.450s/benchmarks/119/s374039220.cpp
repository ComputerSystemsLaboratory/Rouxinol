#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<numeric>
#include<vector>
#include<cstring>
#define foreach(t,p) for(t::iterator it=p.begin();it!=p.end();p++)
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
#define MAX_W 50

bool island[MAX_W+3][MAX_W+3];

int solve(int x,int y)
{
	if(!island[x][y]) {return 0;}

	island[x][y]= false;
	solve(x-1,y-1);
	solve(x-1,y);
	solve(x-1,y+1);
	solve(x,y-1);
	solve(x,y+1);
	solve(x+1,y+1);
	solve(x+1,y);
	solve(x+1,y-1);
//	cout << x << " " << y << endl;
	return 1;
}


int main()
{
	int w,h;
	while(cin >> w >> h &&w && h)
	{
		REP(i,MAX_W+2)REP(j,MAX_W+2) island[i][j]=false;
		REP(i,h)REP(j,w){cin >> island[i+1][j+1];}
		int kosu = 0;
		REP(i,h)REP(j,w){kosu += solve(i+1,j+1);}
		cout << kosu << endl;
		
	}
	return 0;
}