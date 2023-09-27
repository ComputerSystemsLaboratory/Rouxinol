#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <list>

long long int INF = 1e18;
using namespace std;

typedef pair<long long int, long long int> P;

long long int DP[1001][1001] = {};

int n;
int s[200], t[200];
bool visited[200] = {};

int dfs(int u, int d){
	if(visited[u]){
		return d - 1;
	}
	visited[u] = true;
	s[u] = d;
	for(int i = 0; i < n; i++){
		if(DP[u][i]){
			d = dfs(i, d + 1);
		}
	}
	t[u] = d + 1;
	return d + 1;
}

int main(){
	
	cin >> n;
	
	for(int loop = 0; loop < n; loop++){
		
		int id, k;
		cin >> id >> k;
		id--;
		
		for(int i = 0; i < k; i++){
			int num;
			cin >> num;
			num--;
			DP[id][num] = 1;
		}
		
	}
	
	int ret = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == 0){
			ret = dfs(i, ret + 1);
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << i + 1 << " " << s[i] << " " << t[i] << endl;
	}
	
	return 0;
}
