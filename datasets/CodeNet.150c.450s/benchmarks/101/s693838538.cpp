#include <iostream>
using namespace std;

int parent[100000],height[100000];

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
	int n,m,q;
	cin >> n >> m;
	for(int i = 0;i < n;i++) parent[i] = i;
	for(int i = 0;i < m;i++){
		int a,b;
		cin >> a >> b;
		unite(a,b);
	}
	cin >> q;
	for(int i = 0;i < q;i++){
		int a,b;
		cin >> a >> b;
		if(same(a,b)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}