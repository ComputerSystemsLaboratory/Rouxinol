#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>

using namespace std;
#define DEBUG(x) cout<<#x<<": "<<x<<endl

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define INT(a) int((a)+1e-9)
int DX[4]={1,0,-1,0};
int DY[4]={0,1,0,-1};

typedef pair<int,int> Pii;

#define SUPhl 1502
#define SUPgl 1502
#define SUPx 1500002
#define SUPy 1500002
int hl,gl;
int hs[SUPhl],gs[SUPgl];
int shs[SUPhl],sgs[SUPgl];
int xcn[SUPx],ycn[SUPy];



int solve(){
	shs[0]=0;
	FOR(hi,0,hl){shs[hi+1]=shs[hi]+hs[hi];}
	FOR(x,0,SUPx){xcn[x]=0;}
	FOR(ahi,0,hl){
		FOR(bhi,ahi+1,hl+1){
			int x=shs[bhi]-shs[ahi];
			xcn[x]++;
		}
	}

	sgs[0]=0;
	FOR(gi,0,gl){sgs[gi+1]=sgs[gi]+gs[gi];}
	FOR(y,0,SUPy){ycn[y]=0;}
	FOR(agi,0,gl){
		FOR(bgi,agi+1,gl+1){
			int y=sgs[bgi]-sgs[agi];
			ycn[y]++;
		}
	}

	int re=0;
	FOR(x,1,SUPx){
		re += xcn[x]*ycn[x];
	}

	return re;
}



int main(){
	while(true){
		cin >> hl >> gl;			if(!hl) return 0;
		REP(hi,hl){cin>>hs[hi];}
		REP(gi,gl){cin>>gs[gi];}

		cout<<solve()<<endl;

	}
}