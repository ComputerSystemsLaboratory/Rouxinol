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

int lcs(string x, string y) {
	int m = x.size(), n = y.size();
	int c[1000+1][1000+1];
	x = ' ' + x; y = ' ' + y;
	for( int i = 0; i <= m; i++) c[i][0] = 0;
	for( int j = 0; j <= n; j++) c[0][j] = 0;
	for( int i = 1; i <= m; i++) {
		for( int j = 1; j <= n; j++) {
			if(x[i] == y[j]) c[i][j] = c[i-1][j-1] + 1;
			else if(c[i-1][j] >= c[i][j-1]) c[i][j] = c[i-1][j];
			else c[i][j] = c[i][j-1];
		}
	}
	return c[m][n];
}

int main(){
	int q;
	cin >> q;
	for( int i = 0; i < q; i++) {
		string s, t;
		cin >> s >> t;
		cout << lcs(s, t) <<endl;
	}

	return 0;
}