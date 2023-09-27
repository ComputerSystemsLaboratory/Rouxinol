#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int P[10010];
int Rank[10010];

void init(int N){
	for(int i = 0; i < N; ++i){
		P[i] = i;
		Rank[i] = 0;
	}
}

int root(int a){
	if(P[a] == a) return a;
	return (P[a] = root(P[a]));
}

bool IsSameSet(int a, int b){
	return root(a) == root(b);
}

void unite(int a, int b){
	P[root(a)] = root(b);
}

void link(int a, int b){
	if(Rank[a] > Rank[b]){
		P[b] = a;
	} else {
		P[a] = b;
		if(Rank[a] == Rank[b]) Rank[a]++;
	}
}

int main() {
	int n, q;
	int com, x, y;
	cin >> n >> q;
	init(n);
	for(int i = 0; i < q; i++){
		cin >> com >> x >> y;
		if(com == 0) unite(x,y);
		else cout << IsSameSet(x,y) << endl;
	} 
	return 0;
}