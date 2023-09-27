#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <vector>
#include <list>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <map>
#define INFTY (1<<30)
#define MAX 100000000

using namespace std;

int main() {
	int n, m[101][101] = {};
	cin >> n;
	for( int i = 1; i <= n; i++) {
		int u, k;
		cin >> u >> k;
		for( int j = 1; j <= k; j++) {
			int v;
			cin >> v;
			m[i][v] = 1;
		}
	}
	for( int i = 1; i <= n; i++) {
		for( int j = 1; j <= n; j++) {
			if( j < n) cout << m[i][j] << ' ';
			else cout << m[i][j];
		}
		cout << endl;
	}

    return 0;
}