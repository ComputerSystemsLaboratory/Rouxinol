#include<stdio.h>
#include <iostream>
#include <math.h>
#include <numeric>
#include <vector>
#include <map>
#include <functional>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string>
#include <string.h>
#include <assert.h>
#include <stdio.h>
#include <queue>
#include<iomanip>
#include<bitset>
#include<stack>
#include<set>
#include<limits>
#include <complex>
#include<cstdlib>
using namespace std;

vector<vector<int>>outs;
int N, M, K;
bool check(const vector<int>&nums) {
	for (int i = 0; i < N-1; ++i) {
		if (outs[nums[i]][nums[i + 1]]) {
			return false;
		}
	}
	if (outs[nums[N - 1]][nums[0]]) {
		return false;
	}
	else {
		return true;
	}
}

int main() {
	while (1) {

		int N, M, P; cin >> N >> M >> P;
		if (!N)break;
		int bo;
		int si = 0;
		for (int i = 0; i < N; ++i) {
			int a; cin >> a;
			if (i == M - 1) {
				bo = a;
			}
			si += a;
		}
		if (bo) {
			int ans = ((100 - P)*si) / bo;
			cout << ans << endl;
		}
		else {
			cout << 0 << endl;
		}
	
	}
	
	return 0;
}