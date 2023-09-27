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
	int ret = R[1] - R[0];
	int a = INT_MAX;
	Loop(i, n) {
		ret = max(ret, R[i] - a);
		a = min(a, R[i]);
	}
	cout << ret << endl;
	return 0;
}