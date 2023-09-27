#include <vector>
#include <math.h>
#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int n, u, k, v, dp[101];
bool li[101][101];


int main(){
	fill(dp, dp + 101, -1);
	for (int i = 0; i < 101; i++) {
		fill(li[i], li[i] + 101, false);
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			li[u][v] = true;
		}
	}
	vector<int> l = vector<int>(1, 1);
	vector<int> l2 = vector<int>();
	dp[1] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < l.size(); j++) {
			for (int k = 1; k <= n; k++) {
				if (li[l[j]][k] && dp[k] < 0) {
					dp[k] = i;
					l2.push_back(k);
				}
			}
		}
		l2.swap(l);
		vector<int>().swap(l2);
	}
	for (int i = 1; i <= n; i++) {
		cout << i << " " << dp[i] << endl;
	}

	return 0;
}