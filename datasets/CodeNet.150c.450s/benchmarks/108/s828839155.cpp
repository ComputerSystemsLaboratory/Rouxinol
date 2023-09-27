#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <set>
#include <stdio.h>
using namespace std;
int n,m,l,p;
int a[100][100];
int D[100];
void bfs( int src) {
	queue<int> Q;
	Q.push(src);
	D[src]=0;
	while( ! Q.empty() ) {
		int cur = Q.front();
		Q.pop();
		for(int dst = 0; dst < n; dst++ ) {
			if( D[dst] < 0 && a[cur][dst] == 1 ) {
				D[dst] = D[cur] + 1;
				Q.push(dst);
			}
		}
	}
	for (int i = 0; i < n;i++) {
	cout << i+1 <<  " " << D[i] <<  endl;
	}
}

int main() {
	cin >> n;
	for ( int i = 0;i < n;i++) {
		D[i] = -1;
		for(int j= 0; j < n;j++) {
			a[i][j] = 0;
		}
	}
	for (int i = 0;i < n; i++){
		cin >> m;
		cin >> l;
		for(int j = 0; j < l;j++) {
			cin >> p;
			a[m-1][p-1] = 1;
		}
	}
	bfs(0);
}
		