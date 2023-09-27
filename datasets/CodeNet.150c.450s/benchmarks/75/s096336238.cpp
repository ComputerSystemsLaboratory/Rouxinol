#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt" > "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\b.txt"
 
int N;
vector<int>nums;

void maxheap(const int now) {
	int lid = now * 2;
	int rid = now * 2 + 1;
	int l = -2e9-1, r = -2e9-1;
	if (lid <= N)l = nums[lid];
	if (rid <= N)r = nums[rid];
	int large = -2;
	if (nums[lid] > nums[now]) {
		if (nums[rid] > nums[lid]) {
			large = rid;
		}
		else {
			large = lid;
		}
	}
	else {
		if (nums[rid] > nums[now]) {
			large = rid;
		}
		else {
			large = now;
		}
	}
	if (large != now) {
		swap(nums[large], nums[now]);
		maxheap(large);
	}
}


int main() {
	cin >> N;
	nums.resize(2*N+2);
	fill(nums.begin(), nums.end(), -2e9-1);
	for (int i = 0; i < N; ++i) {
		cin >> nums[i+1];
	}
	for (int i = N / 2; i >= 1; --i) {
		maxheap(i);
	}
	for (int i = 1; i <= N; ++i) {
		cout << " ";
		cout << nums[i];
	}
	cout << endl;
	return 0;
}