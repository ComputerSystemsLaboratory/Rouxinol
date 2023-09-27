#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define FOR(I,F,N) for(int I = F; I < (int)(N); I++)
#define rep(i, n) FOR(i, 0, n)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int fib(int n){
	int dp[1000];
	fill_n(dp, 1000, 0);
	dp[0] = 1;
	dp[1] = 1;
	for(int i = 2; i < n; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n-1];
}

int main(void){
	int n;
	cin >> n;
	FIN(fib(n+1));
	return 0;
}