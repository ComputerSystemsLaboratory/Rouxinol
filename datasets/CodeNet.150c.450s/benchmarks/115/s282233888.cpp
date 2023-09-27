#include<bits/stdc++.h>
#define dump(a) cout << #a << " " << a << endl
#define MAX_SIZE 1000
using namespace std;

string X,Y;
int dp[MAX_SIZE+1][MAX_SIZE+1];

int dfs(int xi, int yi) {
	if (dp[xi][yi] != -1) { return dp[xi][yi]; }

	if (xi==X.size() || yi==Y.size()) { return 0; }
	else if (X[xi] == Y[yi]) {
		dp[xi][yi] = dfs(xi+1,yi+1) + 1;
	}
	else {
		dp[xi][yi] = max(dfs(xi,yi+1),dfs(xi+1,yi));
	}
	return dp[xi][yi];
}

int main() {
	int N;

	cin >> N;

	for(int i=0; i<N; i++) {
		cin >> X >> Y;
		memset(dp,-1,sizeof(dp)); //-1??§?????????
		cout << dfs(0,0) << endl;
	}

	return EXIT_SUCCESS;
}