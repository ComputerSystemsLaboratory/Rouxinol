#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <queue>
#include <stack>
#include <map>
#include <set>

#define rep(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define all(v) (v).begin(), (v).end()
#define rev(s) (s).rbegin(), (s).rend()
#define MP make_pair
#define X first
#define Y second

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const int INF = 100000000;

const int tetra_size = 185;
int tetra[tetra_size];
int tri[tetra_size];
void settetra(){
	tetra[0] = 0;
	tri[0] = 0;
	for(int i = 1; i < tetra_size; i++){
		tri[i] = tri[i-1] + i;
		tetra[i] = tetra[i-1] + tri[i];
	}
}

int dp[1000001];
int dpodd[1000001];
void setdp(){
	fill(dp, dp+1000001, INF);
	dp[0] = 0;
	fill(dpodd, dpodd+1000001, INF);
	dpodd[0] = 0;
	for(int i = tetra_size ; i >= 1; i--){
		for(int j = 0; j + tetra[i] < 1000001; j++ ){
			if(dp[j] == INF) continue;
			dp[j+tetra[i]] = min(dp[j]+1, dp[j+tetra[i]]);
			if(tetra[i]%2 == 1) dpodd[j+tetra[i]] = min(dpodd[j]+1, dpodd[j+tetra[i]]);
		}
	}
}

int main(){
	settetra();
	setdp();
	int n;
	while(cin >> n, n){
		//cout << tetra[n]  << endl;
		cout << dp[n] << ' ' <<  dpodd[n]  << endl;
	}

	return 0;
}