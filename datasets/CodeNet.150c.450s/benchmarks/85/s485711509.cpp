#include<bits/stdc++.h>
#define dump(a) cout << #a << " " << a << endl
#define MAX_SIZE 101
using namespace std;

vector<pair<int,int>> sikis;
int dp[MAX_SIZE][MAX_SIZE];


int mul(int L, int M, int R) {
	int r1 = sikis[L].first;
	int c2 = sikis[R-1].second;
	int r2 = sikis[M].first;
	return (r1 * c2 * r2); //r1*c2*c1
}

int dfs(int L, int R) {
	if (L + 1 == R) { return 0; }
	if (dp[L][R] >= 0) { return dp[L][R]; } //dp?????¢
	
	vector<int> values;
	for(int m = L+1; m < R; m++) {
		int value = dfs(L,m)+dfs(m,R)+mul(L,m,R);
		values.push_back(value);
	}
	dp[L][R] = *min_element(values.begin(), values.end());

	return dp[L][R];
}

int main() {
	int N;
	int r,c;

	cin >> N;
	for(int y=0; y<N; y++) {
		for(int x=0; x<N+1; x++) {
			dp[y][x] = -1;
		}
	}

	for(int i=0; i<N; i++) {
		cin >> r >> c;
		sikis.push_back(make_pair(r,c));
	}
	cout << dfs(0,N) << endl;

	return EXIT_SUCCESS;
}