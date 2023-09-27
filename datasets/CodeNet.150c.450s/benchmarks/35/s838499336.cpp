#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
const ld eps = 1e-9;

//// < "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\a.txt" > "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\b.txt"


int main() {
	while (1) {
		int N; cin >> N;
		if (!N)break;
		vector<int>as(N);
		vector<long long int>sums(N + 1);
		for (int i = 0; i < N; ++i)cin >> as[i];
		for (int i = 0; i < N; ++i) {
			sums[i + 1] = sums[i] + as[i];
		}
		long long int ans = -1e8;
		for (int l = 0; l < N; ++l) {
			for (int r = l + 1; r <= N; ++r) {
				ans = max(ans, sums[r] - sums[l]);
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}