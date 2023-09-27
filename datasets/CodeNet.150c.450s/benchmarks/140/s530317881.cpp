#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<algorithm>
#include<functional>
#include<utility>
#include<bitset>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<cstdio>

using namespace std;

#define REP(i,n) for(int i=0;i<int(n);i++)
#define foreach(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
typedef long long ll;
typedef pair<int,int> P;

int par[10010];

void init(int n){
	REP(i,n){
		par[i]=i;
	}
}

int find(int x){
	if(par[x]==x){
	   return x;
	}else{
	  return par[x]=find(par[x]);
	}
}

void unite(int x,int y){
	x=find(x); y=find(y);
	if(x==y) return;

	par[x]=y;
}

bool same(int x,int y){
	return find(x)==find(y);
}

struct edge { int from,to,cost; };

bool comp(const edge& e1,const edge& e2){
	return e1.cost<e2.cost;
}

edge es[100010];

int V,E;

int kruskal(){
	sort(es,es+E,comp);
	init(V);
	int res=0;
	REP(i,E){
		edge e=es[i];
		if(!same(e.from,e.to)){
			unite(e.from,e.to);
			res+=e.cost;
		}
	}
	return res;
}

int main(void){

	          cin >> V >> E;
	          REP(i,E){
	        	  cin >> es[i].from >> es[i].to >> es[i].cost;
	          }

	          cout << kruskal() << endl;

	          return 0;
}