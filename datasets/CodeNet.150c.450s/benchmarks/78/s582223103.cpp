#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_N = 1000000;

vector<int> tetra;
vector<int> tetra_odd;

short dp[MAX_N+1];
short dp_odd[MAX_N];

void init() {
	int n = 1;
	while (true){
		int m = n * (n + 1) * (n + 2) / 6;
		if (m >= MAX_N * 10) {
			break;
		}
		tetra.push_back(m);
		if (m % 2 == 1) {
			tetra_odd.push_back(m);
		}
		n++;
	}
}

void solve() {
	dp[0] = dp_odd[0] = 0;
	for (int i = 1; i < MAX_N; i++) {
		short ans = 10;
		short ans_odd = 100;
		for (int j = 0; tetra[j] <= i; j++) {
			//cout << i << " " << tetra[j] << endl;
			ans = min(ans, dp[i-tetra[j]]);
		}
		
		for (int j = 0; tetra_odd[j] <= i; j++) {
			ans_odd = min(ans_odd, dp_odd[i-tetra_odd[j]]);
		}
		dp[i] = ans + 1;
		dp_odd[i] = ans_odd + 1;
		//cout << i << " " << dp[i] << " " << dp_odd[i] << endl;
	}
}

int main() {
	init();
	solve();
	while (true) {
		int n;
		cin >> n;
		if (n == 0) {
			break;
		}
		
		cout << dp[n] << " " << dp_odd[n] << endl;
	}
}