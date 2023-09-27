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
		for(int j = 0; j < k; j++){
			int v, c;
			cin >> v >> c;
			graph[u][v] = c;
		}
	}
	priority_queue<pair<int, int> > qu;
	qu.push(make_pair(0, 0));
	ans[0] = 0;
	while(!qu.empty()){
		int nowd = -(qu.top()).first;
		int nownode = (qu.top()).second;
		qu.pop();
		for(int i = 0; i < n; i++){
			if(graph[nownode][i] == 0) continue;
			int next = nowd + graph[nownode][i];
			if(ans[i] == -1 || ans[i] > next){
				ans[i] = next;
				qu.push(make_pair(-next, i));
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << i << " " << ans[i] << endl;
	}
}