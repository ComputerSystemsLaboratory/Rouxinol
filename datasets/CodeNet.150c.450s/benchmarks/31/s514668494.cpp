#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <random>
//#include "toollib.h"
//#include "puzzle.h"
#define INT_MAX 2147483647
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#pragma warning (disable:4018)
#pragma warning (disable:4244)

using namespace std;
typedef long long int lint;


//***** Main Program *****

int main() {
	int n;
	cin >> n;
	vector<int> R(n);
	Loop(i, n) cin >> R[i];
	map<int, int> mp;
	Loop(i, n) mp[R[i]]++;
	int ret = R[1] - R[0];
	auto itr = --mp.end();
	Loop(i, n - 1) {
		mp[R[i]]--;
		while (itr->second == 0) itr--;
		int x = itr->first - R[i];
		if (x > ret) ret = x;
	}
	cout << ret << endl;
	return 0;
}