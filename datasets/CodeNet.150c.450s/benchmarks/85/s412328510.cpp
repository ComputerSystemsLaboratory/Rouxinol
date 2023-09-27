#include <iostream>
#include <iomanip>
#include <utility>
#include <cmath>
#include <random>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

#define rep(i,n) for(int i = 0; i<n; ++i)
#define REP(i,n) for(int i = 1; i<=n; ++i)
#define all(x) begin(x),end(x)
#define show(obj) {for(auto x:obj)cout<<x<<' ';cout<<endl;}
typedef long long ll;
typedef pair<int,int> ip;
typedef pair<ll,ll> lp;
const int inf = 1001001000;
const ll INF = 1LL<<60;
const int MOD = (int)1e9 + 7;

template<class T> inline bool chmin(T& a, T b) {if (a > b) { a = b; return true; } return false;}

int main(){
	int N; cin>>N;
	vector<ip> M(N);
	rep(i,N)cin>>M[i].first>>M[i].second;
	vector<vector<int>> dp(N,vector<int>(N,inf));
	rep(i,N)dp[i][i] = 0;
	for(int i = 1; i<N; ++i){
		int l = 0, r = i;
		for(int j = 0; j<N-i; ++j){
			for(int k = l; k<r; ++k){
				chmin(dp[l][r], dp[l][k] + dp[k+1][r] + M[l].first * M[k].second * M[r].second);
				// chmin(dp[l][r], dp[l][r-1] + M[l].first * M[r].first * M[r].second);
			}
			// printf("[l,r] => [%d,%d]\n",l,r);
			++l; ++r;
		}
	}
	cout<<dp[0][N-1]<<endl;
	return 0;
}

