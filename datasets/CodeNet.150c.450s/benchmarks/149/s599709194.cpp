#include <bits/stdc++.h>
using namespace std;

struct UnionFind{
	vector<int> data;

	UnionFind(int sz){
		data.assign(sz, -1);
	}

	bool unite(int x,int y){
		x = find(x), y = find(y);
		if(x == y) return false;
		if(data[x] > data[y]) swap(x,y);
		data[x] += data[y];
		data[y] = x;
		return true;
	}

	bool same(int x,int y){
		if(find(x)==find(y)) return true;
		else return false;
	}

	int find(int k){
		if(data[k]<0) return k;
		return (data[k] = find(data[k]));
	}

	int size(int k){
		return data[find(k)];
	}
};

int main(){
	int n, q; cin >> n >> q;

	UnionFind UF(n);

	for(int Q=0;Q<q;Q++){
		int a,b,c;
		cin >> a >> b >> c;
		if(a==0) UF.unite(b, c);
		else cout << UF.same(b, c) << endl;
	}

	return 0;
}
