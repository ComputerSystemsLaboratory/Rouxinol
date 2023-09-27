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
	int N, W;
	int v[1001];
	int w[1001];
	int dp[101][10001];
	cin >> N >> W;
	fill_n(*dp, 101*10001, 0);
	rep(i, N)cin >> v[i] >> w[i];
	for(int i = 0; i < N; i++){
		for(int j = 0; j <= W; j++){
			if(j < w[i]){
				dp[i+1][j] = dp[i][j];
			}else{
				dp[i+1][j] = max(dp[i][j], dp[i][j-w[i]]+v[i]);
			}
		}
	}
	FIN(dp[N][W]);

	return 0;
}