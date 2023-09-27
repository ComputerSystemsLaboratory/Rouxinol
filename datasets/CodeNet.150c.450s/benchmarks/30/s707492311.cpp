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
	int N;
	cin >> N;
	vector<int> A(N);
	Loop(i, N) cin >> A[i];
	int ret = 0;
	Loop(i, N - 1) {
		int x = i;
		for (int j = i + 1; j < N; j++) {
			if (A[j] < A[x]) x = j;
		}
		if (x != i) {
			ret++;
			int pass = A[x];
			A[x] = A[i];
			A[i] = pass;
		}
	}
	cout << A[0];
	for (int i = 1; i < N; i++) cout << " " << A[i];
	cout << endl << ret << endl;
	return 0;
}