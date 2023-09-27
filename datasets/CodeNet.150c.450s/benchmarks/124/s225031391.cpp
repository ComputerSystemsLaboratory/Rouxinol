#include <utility>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int n;					//えぬ
int a[100][100] = {0};	//辺の重さ
int f[100] = {0};		//その頂点が調査済みかどうか

int main(){
	cin >> n;
	//まず辺の重さをaに入れる
	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < n; j++ ) {
			a[i][j] = -1;
		}
	}
	a[0][0] = 0;
	for ( int i = 0; i < n; i++ ) {
		int u;
		cin >> u;
		int k;
		cin >> k;
		for ( int j = 0; j < k; j++ ) {
			int v;
			cin >> v;
			cin >> a[u][v];
		}
	}
	for ( int i = 0; i < n - 1; i++ ) {
		int k = -1;
		int v = 0;
		for ( int j = 1; j < n; j++ ) {
			if ( a[0][j] == -1 || f[j] == 1 ) continue;
			if ( k == -1 || a[0][j] < k ) {
				v = j;
				k = a[0][j];
			}
		}
		f[v] = 1;
		for ( int j = 1; j < n; j++ ) {
			if ( v == j ) continue;
			if ( a[v][j] == -1 || f[j] == 1 ) continue;
			if ( a[0][j] == -1 || a[0][j] > a[0][v] + a[v][j] ) {
				a[0][j] = a[0][v] + a[v][j];
			}
		}
	}
	for ( int i = 0; i < n; i++ ) {
		cout << i << " " << a[0][i] << endl;
	}
	return 0;
}