#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;


int main() {
	vector<int>nums(10);
	for (int i = 0; i < 10; ++i) {
		cin >> nums[i];
	}
	sort(nums.begin(), nums.end(), greater<int>());
	for (int i = 0; i < 3; ++i) {
		cout << nums[i] << endl;
	}
	return 0;
}