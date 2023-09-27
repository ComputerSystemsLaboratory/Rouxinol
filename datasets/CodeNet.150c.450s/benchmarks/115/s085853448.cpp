#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define INT(a) int((a)+1e-9)
#define UNDEFCHAN -1
#define SUPL 1002
#define MISERU(name,value) cout<<name<<": "<<value<<endl;

int xl,yl;
char xs[SUPL],ys[SUPL];
int rss[SUPL][SUPL];

int r(int xi, int yi){
	if (rss[xi][yi]!=UNDEFCHAN) return rss[xi][yi];
	int re;
	if(xi==0) re=0;
	else if(yi==0) re=0;
	else if(xs[xi-1]==ys[yi-1]) re=r(xi-1,yi-1)+1;
	else re=max(r(xi-1,yi),r(xi,yi-1));
	rss[xi][yi]=re;
	return re;
}

int solve(){
	REP(xi,xl+1) REP(yi,yl+1) rss[xi][yi]=UNDEFCHAN;
	return r(xl,yl);
}

int main(){
	int ol;
	cin>>ol;
	REP(oi,ol){
		cin>>xs;
		cin>>ys;
		xl=strlen(xs);
		yl=strlen(ys);
		cout<<solve()<<endl;
	}
	return 0;
}