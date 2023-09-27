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

int main(void){
	int n;
	//d[0] = 1patern d[1] = 1paten d[2] = 2patern
	int dp[41] = {1, 1, 2};
	for(int i = 3; i <= 31; i++){
		dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
	}
	while(cin >> n, n)
		FIN(dp[n]/3650 + 1);

	return 0;
}