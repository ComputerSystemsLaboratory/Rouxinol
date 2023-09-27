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

int partition(vector<int> &A, vector<int> &I, vector<string> &S, int p, int r)
{
	int x = A[r];
	int i = p - 1;
	for(int j = p; j < r; ++j) {
		if(A[j] <= x) {
			++i;
			swap(A[i], A[j]);
			swap(S[i], S[j]);
			swap(I[i], I[j]);
		}
	}
	swap(A[i + 1], A[r]);
	swap(S[i + 1], S[r]);
	swap(I[i + 1], I[r]);
	return i + 1;
}

void QuickSort(vector<int> &A, vector<int> &I, vector<string> &S, int p, int r)
{
	if(p < r) {
		int q = partition(A, I, S, p, r);
			QuickSort(A, I, S, p, q - 1);
			QuickSort(A, I, S, q + 1, r);
	}
}

bool isStable(vector<int> &A, vector<int> &I, int n)
{
	REP(i, n - 1) {
		if(A[i] == A[i + 1] && I[i] > I[i + 1])
			return false;
	}

	return true;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	cin >> n;

	vector<int> A(n);
	vector<string> S(n);
	vector<int> I(n);
	REP(i, n) {
		cin >> S[i] >> A[i];
		I[i] = i;
	}
	QuickSort(A, I, S, 0, n - 1);

	(isStable(A, I, n))? cout << "Stable" : cout << "Not stable";
	cout << endl;

	REP(i, n) {
		cout << S[i]  << ' ' << A[i] << endl;
	}

	return 0;
}