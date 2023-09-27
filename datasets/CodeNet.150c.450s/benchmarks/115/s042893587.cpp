#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <time.h>

using namespace std;

void solve(){
	time_t start, end;

	string A;
	/*for (int i = 0; i < n; i++)*/ cin >> A;
	string B;
	cin >> B;
	int n = A.size(), m = B.size();
	vector<vector<int>> DP(n + 1, vector<int>(m + 1, 0));
	start = clock();
	
	//for (int i = 0; i < n; i++) DP[i][0] = 0;
	//for (int j = 0; j < m; j++) DP[0][j] = 0;

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (A[i - 1] == B[j - 1]) DP[i][j] = DP[i - 1][j - 1] + 1;
			else DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
		}
	}

	end = clock();

	cout << DP[n][m] << endl;

}

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		solve();
	}
}