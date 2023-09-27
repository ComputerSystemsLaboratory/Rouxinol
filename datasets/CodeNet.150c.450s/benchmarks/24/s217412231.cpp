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

		long long int N, M; cin >> N >> M;
		if (!N)break;
		vector<long long int>attacks(11);
		for (int i = 0; i < N; ++i) {
			long long int d, p; cin >> d >> p;
			attacks[p] += d;
		}
		long long int totalattack = 0;
		for (int i = 1; i <= 10; ++i) {
			totalattack += i*attacks[i];
		}
		long long int minusattack = 0;
		int num = 10;
		while (M&&num) {
			int usemoney = min(M, attacks[num]);
			minusattack += num*usemoney;
			M -= usemoney;
			num--;
		}
		cout << totalattack - minusattack << endl;
	
	}
	
	return 0;
}