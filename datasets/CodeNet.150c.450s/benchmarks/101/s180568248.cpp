#include<iostream>
#include<string>
#include<algorithm>
#include<utility>
#include<numeric>
#include<vector>
#include<map>
#include<set>
#include<tuple>
#include<stack>
#include<queue>
#include<functional>
#include<iterator>
#include<cmath>

using namespace std;

typedef pair<int,int> P;


const int max_n = 1e5;

int par[max_n];
int rnk[max_n];

void init(int n){
	for(int i=0; i<n; i++){
		par[i] = i;
		rnk[i] = 0;
	}
}

int find_root(int x){
	if(par[x] == x) return x;
	else			return par[x] = find_root(par[x]);
}

void unite(int x, int y){
	x = find_root(x);
	y = find_root(y);
	if(x == y) return;

	if(rnk[x] < rnk[y]){
		par[x] = y;
	}
	else{
		par[y] = x;
		if(rnk[x] == rnk[y]) rnk[x]++;
	}
}

bool same(int x, int y){
	return find_root(x) == find_root(y);
}


int main(){
	int n,m;
	cin >> n >> m;

	init(n);

	int s,t;
	for(int i=0;i<m;i++){
		cin >> s >> t;
		unite(s,t);
	}

	int q;
	cin >> 	q;
	for(int i=0;i<q;i++){
		cin >> s >> t;
		if(same(s,t)) cout << "yes\n";
		else			cout << "no\n";
	}

	return 0;
}
