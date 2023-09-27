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
#define rep(I,N) for(int I = 0; I < (int)(N); I++)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);

int main(void){
	int dp[4][51];
	fill_n(*dp, 4*51, 0);
	rep(i, 10)dp[0][i] = 1;
	for(int i = 1; i <= 3; i++){
		for(int j = 36; j >= 0; j--){
			for(int k = 0; k <= 9; k++){
				if(j-k < 0)break;
				dp[i][j] += dp[i-1][j-k];
			}
		}
	}
	int n;
	while(cin >> n)
		FIN(dp[3][n]);

	return 0;
}