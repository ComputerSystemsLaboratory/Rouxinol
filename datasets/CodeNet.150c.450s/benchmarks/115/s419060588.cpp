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
	int q;
	cin >> q;
	rep(u, q){
		string S, L;
		cin >> S >> L;
		int dp[1002][1002];
		rep(i, S.size())
			rep(j, L.size()){
				if(S[i] == L[j]){
					dp[i+1][j+1] = dp[i][j]+1;
				}else{
					dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
				}
			}
			FIN(dp[S.size()][L.size()]);
	}

	return 0;
}