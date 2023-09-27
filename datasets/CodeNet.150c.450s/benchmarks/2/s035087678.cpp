#include <cstdio>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
#include <functional>
#include <cctype>

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)n; ++i)

int partition(vector<int> &A, int p, int r)
{
	int x = A[r];
	int i = p - 1;
	for(int j = p; j < r; ++j) {
		if(A[j] <= x) {
			++i;
			swap(A[i], A[j]);
		}
	}
	swap(A[i + 1], A[r]);
	return i + 1;
}

int main()
{
	int n;
	cin >> n;
	vector<int> A(n);
	REP(i, n) cin >> A[i];

	int p = partition(A, 0, n - 1);
	REP(i, n) {
		if(i == p) cout << '[' << A[i] << ']';
		else cout << A[i];
		(i != n - 1)? cout << ' ' : cout << endl;
	}


	return 0;
}