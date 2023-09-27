#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <list>
#include <cstring>
#include <stack>

using namespace std;

#define mod 1000000007

int main()
{
	int n;
	cin >> n;
	int graph[101][101] = {};
	for(int i = 0; i < n; i++){
		int u, k;
		cin >> u >> k;
		u--;
		for(int j = 0; j < k; j++){
			int v;
			cin >> v;
			v--;
			graph[u][v] = 1;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << graph[i][j];
			if(j == n - 1) cout << endl;
			else cout << " ";
		}
	}
}