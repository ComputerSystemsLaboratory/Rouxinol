#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	
	int mat[n+1][n+1];
	for(int i = 0; i < n; i++){
		int u, k;
		scanf("%d %d", &u, &k);
		
		for(int j = 0; j <= n; j++){
			mat[u][j] = 0;
		}
		while(k--){
			int v;
			scanf("%d", &v);
			mat[u][v] = 1;
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			printf("%d%c", mat[i][j], j==n ? '\n' : ' ');
		}
	}
	return 0;
}