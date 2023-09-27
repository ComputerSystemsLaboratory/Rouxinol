#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
const ld eps = 1e-9;

//// < "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\a.txt" > "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\b.txt"


int main() {
	int W, N; cin >> W >> N;
	vector<int>nums(W);
	iota(nums.begin(), nums.end(), 1);
	while (N--) {
		int a, b;
		scanf("%d,%d", &a, &b);
		a--; b--;
		swap(nums[a], nums[b]);
	}
	for (int i = 0; i < W; ++i)cout << nums[i] << endl;
	return 0;
}