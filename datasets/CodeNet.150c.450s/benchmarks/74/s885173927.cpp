#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#include <string.h>
using namespace std;

const int INF = 1e+9;
typedef pair<int, int> P;

int memo[50010];
int N, M, d[50];

int rec(int sum){
	if(sum == 0)
		return 0;
	if(sum < 0)
		return INF;
	if(memo[sum] != -1)
		return memo[sum];
		
	int res = INF;
	for(int i = 0; i < M; ++i)
		res = min(res, rec(sum - d[i]) + 1);
	return memo[sum] = res;
}

int main() {
	memset(memo, -1, sizeof(memo));
	cin >> N >> M;
	
	for(int i = 0; i < M; ++i)
		cin >> d[i];
	
	cout << rec(N) << endl;
	return 0;
}