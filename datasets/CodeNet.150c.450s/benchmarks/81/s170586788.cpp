// g++ -std=c++11 temp.cpp
#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define EACH(itr,v) for(auto itr:v)
#define pb(s) push_back(s)
#define mp(a,b) make_pair(a,b)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> PPI;

#define INF INT_MAX/3

#define MAX_N 1000

int n;
int d[10][10];

int main(){
	while(1){
		cin>>n;
		if(n==0) break;
		REP(i,10)REP(j,10)d[i][j]=INF;
		REP(i,10)d[i][i]=0;
		int v = 0;
		REP(i,n){
			int a,b,c;
			cin>>a>>b>>c;
			v = max(v,max(a,b));
			d[a][b]=c; d[b][a]=c;
		}
		v++;

		REP(k,v)REP(i,v)REP(j,v) d[i][j]=min(d[i][j], d[i][k]+d[k][j]);
		int resa = 0, resb = INF;
		REP(i,v){
			int sum = 0;
			REP(j,v) sum+=d[i][j];
			if(resb>sum){
				resa=i; resb=sum;
			}
		}
		cout<<resa<<" "<<resb<<endl;
	}

	return 0;
}