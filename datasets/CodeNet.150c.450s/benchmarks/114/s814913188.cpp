#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct edge{ int a,b,cost; };

int parent[100],height[100];

bool comp(const edge& e1,const edge& e2){
	return e1.cost < e2.cost;
}

int find(int x){
	if(parent[x] == x) return x;
	else return parent[x] = find(parent[x]);
}

void unite(int x,int y){
	x = find(x);
	y = find(y);
	if(x == y) return;
	if(height[x] < height[y]){
		parent[x] = y;
	}else {
		parent[y] = x;
		if(height[x] == height[y]) height[x]++;
	}
}

bool same(int x,int y){
	return find(x) == find(y);
}

int main(){
	int n,res = 0;
	cin >> n;
	vector<edge> es;
	for(int i = 0;i < n;i++) parent[i] = i;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			int t;
			cin >> t;
			if(t != -1) es.push_back({i,j,t});
		}
	}
	sort(es.begin(),es.end(),comp);
	for(int i = 0;i < es.size();i++){
		edge e = es[i];
		if(!same(e.a,e.b)){
			unite(e.a,e.b);
			res += e.cost;
		}
	}
	cout << res << endl;
	return 0;
}