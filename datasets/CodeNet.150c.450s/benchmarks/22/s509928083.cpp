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

bool SearchMinCost(int s){
	REP(i,v) d[i] = INF;
	d[s] = 0;
	int cnt = 0;
	while(true){
		cnt++;
		bool update = false;
		REP(i,e){
			edge e = es[i];
			if(d[e.from]!=INF && d[e.to] > d[e.from] + e.cost ){
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		if(!update) break;
		if(cnt == v) return true;
	}
	return false;
}
int main(){
	cin >> v >> e >> r;
	es.resize(e);
	REP(i,e) {
		cin >> es[i].from >> es[i].to >> es[i].cost;
	}
	d.resize(v);

	int flag = 1;

	if(SearchMinCost(r)==true) flag=0;
	if(flag==0){
		cout <<"NEGATIVE CYCLE"<<endl;
	}else{
		SearchMinCost(r);
		REP(i,v) {
			if(d[i]>=INF) cout << "INF" <<endl;
			else cout << d[i] <<endl;
		}
	}
	return 0;
}