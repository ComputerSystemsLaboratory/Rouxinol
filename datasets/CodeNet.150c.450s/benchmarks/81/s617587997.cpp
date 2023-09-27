#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <stack>
#define INF 100000000
typedef long long int lli;
using namespace std;

struct edge{int from1,to1,from2,to2,cost;};
int shortest_path(int s,int V,int E,vector<int> d,vector<edge> es){
	int result=0;
	for(int i=0; i<V; ++i) d[i]=INF;
	d[s]=0;
	while(true){
		bool update = false;
		for(int i=0; i<E; ++i){
			edge e=es[i];
			if(d[e.from1]!=INF&&d[e.to1]>d[e.from1]+e.cost){
				d[e.to1]=d[e.from1]+e.cost;
				update=true;
			}
			if(d[e.from2]!=INF&&d[e.to2]>d[e.from2]+e.cost){
				d[e.to2]=d[e.from2]+e.cost;
				update=true;
			}
		}
		if(!update) break;
	}
	for(int i=0; i<V; ++i){
		result+=d[i];
	}
	return result;
}

int main(){
	int n;
	while(cin>>n&&n){
		vector<edge> es(n);
		int m=0;
		for(int i=0; i<n; ++i){
			int a,b,c;
			cin >> a >> b >> c;
			m=max(a,max(b,m));
			es[i].from1=a;
			es[i].to1=b;
			es[i].from2=b;
			es[i].to2=a;
			es[i].cost=c;
		}
		vector<int> d(m+1);
		int ans_d=INF;
		int ans_s;
		for(int i=m; i>=0; --i){
			int tmp=shortest_path(i,m+1,n,d,es);
			//cout << tmp << "\n";
			if(ans_d>=tmp){
				ans_d=tmp;
				ans_s=i;
			}
		}
		cout << ans_s << " " << ans_d << "\n";
	}
	return 0;
}