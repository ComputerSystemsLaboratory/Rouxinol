#include <cstdio>
#include <iostream> 
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
 
using namespace std;
using ll = long long;
 
const ll INF = 1e9;
const ll MOD = 1e9 + 7;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
 
int main()
{
	int a, b, n, x, y, dp[20][20], i, j;

	cin >> a >> b;
	while(a > 0 && b > 0){
		for(i = 0; i < 20; i++){
			for(j = 0; j < 20; j++){
				dp[i][j] = 0;
			}
		}
		dp[1][1] = 1;
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> x >> y;
			dp[y][x] = INF;
		}
		for(i = 1; i <= b; i++){
			for(j = 1; j <= a; j++){
				if(dp[i][j] == INF)continue;
				if(dp[i + 1][j] != INF){
					dp[i + 1][j] += dp[i][j];
				}
				if(dp[i][j + 1] != INF){
					dp[i][j + 1] += dp[i][j];
				}
			}
		}
		cout << dp[b][a] << endl;;

		cin >> a >> b;
	}
 
	return 0;
}