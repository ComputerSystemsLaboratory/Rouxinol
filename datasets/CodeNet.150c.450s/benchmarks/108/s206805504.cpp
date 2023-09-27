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
	int graph[101][101] = {};
	cin >> n;
	int ans[101] = {};
	for(int i = 0; i < n; i++){
		ans[i] = -1;
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
	queue<int> qu;
	qu.push(0);
	ans[0] = 0;
	while(!qu.empty()){
		int tmp = qu.front();
		qu.pop();
		for(int i = 0; i < n; i++){
			if(ans[i] == -1 && graph[tmp][i] > 0){
				ans[i] = ans[tmp] + 1;
				qu.push(i);
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << i + 1 << " " << ans[i] << endl;
	}
}