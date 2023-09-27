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

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define INT(a) int((a)+1e-9)
#define INF 1e8


int main(){
	while(true){
		int pl;
		cin >> pl;			if(!pl) return 0;
		int sump,maxp,minp;
		sump=0;maxp=0;minp=INF;
		REP(pi,pl){
			int p;
			cin>>p;
			sump+=p;
			maxp=max(maxp,p);
			minp=min(minp,p);
		}
		cout<<INT((sump-minp-maxp)/(pl-2))<<endl;

	}
}