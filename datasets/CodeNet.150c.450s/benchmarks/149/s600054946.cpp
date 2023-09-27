#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <set>
#include <stdio.h>
#include <cstdio>
using namespace std;
int p[10000];
int root(int a) {
	if (p[a] == a) return a;
	return (p[a] = root(p[a]));
}
void unite(int a,int b){
	p[root(a)] = root(b);
}
void same(int a ,int b){
	if (root(a) == root(b)) cout << "1" <<endl;
	else cout << "0" << endl;
}
int main() {
	int n, q, com,x,y;
	cin >> n >> q;
	for(int i = 0;i<n;i++){
		p[i]=i;
	}
	for (int i=0 ;i<q;i++){
		cin >> com;
		if (com == 0){
			cin >> x >> y;
			unite(x,y);
		}
		else {
			cin >> x >> y;
			same(x,y);
		}
	}
}