#include <iostream>
#include <ios>
#include <algorithm>
using namespace std;
int n, A[20] = {};

bool check(int i, int v){
	if (i == n)					return false;
	if (v == A[i])				return true;
	if (v < A[i])				return false;
	if (check(i + 1, v))		return true;
	if (check(i + 1, v - A[i]))	return true;
	return false;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int m, i, k;
	cin >> n;
	for (i = 0; i < n; ++i)
		cin >> A[i];
	sort(A, A + n);
	cin >> m;
	for (i = 0; i < m; ++i){
		cin >> k;
		cout << (check(0, k) ? "yes\n" : "no\n");
	}

	return 0;
}