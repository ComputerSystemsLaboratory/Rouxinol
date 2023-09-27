#include <sstream>
#include <fstream>
#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

bool used[10];
int S;

int dfs( int s, int n ){

	if( n == 0 ){
		if( s == S ){
			return 1;
		}else{
			return 0;
		}
	}

	int res = 0;
	for( int i = 0; i <= 9; i++ ){
		if( used[i] ) continue;
		used[i] = true;
		res += dfs( s + i, n - 1 );
		used[i] = false;
	}

	return res;
}

int main() {
	int n;

	while( true ){

		cin >> n >> S;

		if( n == 0 && S == 0 ) break;

		memset( used, false, sizeof( used ) );
		int res = dfs( 0, n );
		int d = 1;
		for( int i = n; i >= 2; i-- ){
			d *= i;
		}
		cout << (res / d) << endl;

	}
}