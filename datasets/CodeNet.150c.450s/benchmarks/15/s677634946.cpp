#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
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
#pragma warning (disable:4996)

using namespace std;
typedef long long int lint;


//***** Main Program *****

int main() {
	int n, q;
	cin >> n;
	vector<int> S(n);
	Loop(i, n) cin >> S[i];
	cin >> q;
	vector<int> T(q);
	Loop(i, q) cin >> T[i];
	int ret = 0;
	Loop(i, q) {
		Loop(j, n) {
			if (S[j] == T[i]) {
				ret++;
				break;
			}
		}
	}
	cout << ret << endl;
	return 0;
}