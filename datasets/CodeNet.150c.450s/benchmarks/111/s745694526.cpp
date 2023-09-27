#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt"
int main() {
	int N; cin >> N;
	vector<int>ds(N);
	for (int i = 0; i < N; ++i) {
		cin >> ds[i];
	}
	vector<vector<unsigned long long int>>dp(N, vector<unsigned long long int>(21,0));
	dp[1][ds[0]] = 1;
	for (int i = 1; i < N-1; ++i) {
		for (int j = 0; j <= 20; ++j) {
			{
				int next = j + ds[i];
				if (next >= 0 && next <= 20) {
					dp[i + 1][next] += dp[i][j];
				}
			}
			{
				int next = j - ds[i];
				if (next >= 0 && next <= 20) {
					dp[i + 1][next] += dp[i][j];
				}
			}
		}
	}
	unsigned long long int ans = dp[N - 1][ds[N - 1]];
	cout << ans << endl;
	return 0;
}