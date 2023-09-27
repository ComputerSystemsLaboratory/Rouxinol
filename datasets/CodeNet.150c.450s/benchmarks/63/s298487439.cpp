#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <cstring>
#include <sstream>
#include <iomanip>//小数精度 	cout << fixed << setprecision(5) << tmp << endl;
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define All(X)      (X).begin(),(X).end()
const ll int INF =1000000001;
int v,e,r;


struct edge {ll int from,to,cost; };

vector<edge> es(e);
vector<ll int> d(v);

bool find_negative_loop(){
	//memset(d,0,sizeof(d));
	fill(All(d),0);
	REP(i,v){
		REP(j,e){
			edge e = es[j];
			if(d[e.to] > d[e.from] + e.cost){
				d[e.to] = d[e.from] + e.cost;
				if(i==v-1) return true;
			}
		}
	}
	return false;
}

void SearchMinCost(int s){
	REP(i,v) d[i] = INF;
	d[s] = 0;
	while(true){
		bool update = false;
		REP(i,e){
			edge e = es[i];
			if(d[e.from]!=INF && d[e.to] > d[e.from] + e.cost ){
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		if(!update) break;
	}
}
int main(){
	cin >> v >> e >> r;
	es.resize(e);
	REP(i,e) {
		cin >> es[i].from >> es[i].to >> es[i].cost;
	}
	d.resize(v);
	SearchMinCost(r);

	//if(find_negative_loop()){
	//	cout <<"NEGATIVE CYCLE"<<endl;
	//}else{
		SearchMinCost(r);
		REP(i,v) {
			if(d[i]>=INF) cout << "INF" <<endl;
			else cout << d[i] <<endl;
		}
	//}
	return 0;
}