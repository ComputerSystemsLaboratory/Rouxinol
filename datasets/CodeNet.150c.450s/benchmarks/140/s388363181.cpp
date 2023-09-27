#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
#include<string>
#include<cmath>
#include<set>
#include<queue>
#include<bitset>
#include<iomanip>
using namespace std;
const int inf = 1001001000;

void print(vector<vector<int>> a){
	for (int i=0;i<a.size();i++){
		for (int j=0;j<a[i].size();j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void print(vector<int> a){
    int n = a.size();
    for (int j=0;j<n;j++) {
        if (j != n-1) cout << a[j] << " ";
        else cout << a[j] << endl;
    }
}

class UnionFind{
public:
	vector<int> parent;
	UnionFind(){}
	UnionFind(int n){
		this->parent = vector<int>(n,-1);
	}
	int root(int x){
		if (this->parent[x] < 0) return x;
		this->parent[x] = root(this->parent[x]);
		return this->parent[x];
	}
	int unite(int x, int y){
		int rx = this->root(x);
		int ry = this->root(y);
		if (rx == ry) return false;
		if (this->parent[rx] > this->parent[ry]) swap(rx, ry);
		this->parent[rx] += this->parent[ry];
		this->parent[ry] = rx;
		return true;
	}
	int same(int x, int y){
		int rx = this->root(x);
		int ry = this->root(y);
		return rx == ry;
	}
	int size(int x){
		return -this->parent[this->root(x)];
	}
};

int kruskal(int n, priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> que){
	UnionFind uf(n);
	int weight = 0;
	while(!que.empty()){
		vector<int> now = que.top();
		que.pop();
		if (!uf.same(now[1],now[2])){
			uf.unite(now[1],now[2]);
			weight += now[0];
		}
	}
	return weight;
}


int main(){
	int v, e; cin >> v >> e;
	priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> que;
	for (int i = 0; i < e; i++){
		int s, t, w; cin >> s >> t >> w;
		que.push({w,s,t});
	}
	
	cout << kruskal(v,que) << endl;
	return 0;
}

