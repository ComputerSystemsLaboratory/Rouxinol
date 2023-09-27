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
#define INF 1e5


int main(){
	while(true){
		int apl,bpl;
		cin >> apl >> bpl;			if(!apl) return 0;
		int aps[apl]; int bps[bpl];
		REP(api,apl) cin>>aps[api];
		REP(bpi,bpl) cin>>bps[bpi];
		
		int sumap=0,sumbp=0;
		REP(api,apl) sumap+=aps[api];
		REP(bpi,bpl) sumbp+=bps[bpi];
		
		int reap=INF,rebp=INF;
		REP(api,apl){
			int ap=aps[api];
			REP(bpi,bpl){
				int bp=bps[bpi];
				if(sumap-ap+bp==sumbp-bp+ap){
					if(reap+rebp>ap+bp){
						reap=ap;rebp=bp;
					}
				}
			}
		}

		if(reap==INF) cout<<"-1"<<endl;
		else cout<<reap<<" "<<rebp<<endl;
	}
}