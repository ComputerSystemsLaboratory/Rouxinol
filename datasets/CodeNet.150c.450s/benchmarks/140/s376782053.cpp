#include <algorithm>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <queue>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const ll INF = 1000000000000000;
#define MAX_N 10000

struct edge{
	int start;
	int to;
	int cost;
};

bool operator>(const struct edge &left,const struct edge &right){
	return left.cost > right.cost;
}

priority_queue<edge,vector<edge>,greater<edge>> edgeList;

typedef vector<vector<struct edge>> AdjList;
AdjList graph;

int par[MAX_N];

void initUnionFind(){
	rep(i,MAX_N) par[i] = i;
}

int root(int i){
	if( par[i] == i) return i;
	par[i] = root(par[i]);
	return par[i];
}

bool isSameRoot(int i,int j){
	i = root(i);
	j = root(j);
	return i == j;
}

void unite(int i,int j){
	i = root(i);
	j = root(j);
	if( i == j) return;
	par[i] = j;
}

void kruskal(){
	initUnionFind();
	while(!edgeList.empty()){
		edge e = edgeList.top();
		edgeList.pop();
		int u,v;
		u = e.start;
		v = e.to;
		if( isSameRoot(u,v) == false){
			unite(u,v);
			edge e1;
			e1.cost = e.cost;
			e1.start = u;
			e1.to = v;
			graph[u].push_back(e1);

			/*edge e2;
			e2.cost = e.cost;
			e2.start = v;
			e2.to = u;
			graph[v].push_back(e2);*/
		}
	} 
}



int main()
{
	int V,E;
	cin>>V>>E;
	graph = vector<vector<edge>>(V);
	rep(i,E){
		int s,t,w;
		cin>>s>>t>>w;
		edge e;
		e.start = s;
		e.to = t;
		e.cost = w;
		edgeList.push(e);
	}
	kruskal();
	ll ans = 0;
	rep(i,V){
		for(auto iter = graph[i].begin(); iter != graph[i].end(); iter++){
			ans += iter->cost;
			//cout<<i<<"->"<<iter->to<<":"<<iter->cost<<endl;
		}
	}
	cout<<ans<<endl;
	return 0;
}


