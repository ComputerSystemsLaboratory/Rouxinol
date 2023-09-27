#include<iostream>
using namespace std;
int par[100001];
int root(int x){
	if (par[x] == x){
		return x;
	}
	else{
		return par[x] = root(par[x]);
	}
}
bool same(int x, int y){
	return root(x) == root(y);
}
void unite(int x, int y){
	x = root(x);
	y = root(y);
	if (x == y)return;
	par[x] = y;
}
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i <= n; i++){
		par[i] = i;
	}
	int f, x, y;
	for (int i = 0; i < m; i++){
		cin >> f >> x >> y;
		if (!f){
			unite(x, y);
		}
		else{
			if (same(x, y)){
				cout << "1" << endl;
			}
			else{
				cout << "0" << endl;
			}
		}
	}
}