#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cstdio>
//#include<cmath>
using namespace std;

int A[2010], s[21];

bool solve(int i, int m, int n)
{
	if (m == 0)
		return true;
	if (i >= n)
		return false;
	bool res = solve(i + 1, m, n) || solve(i + 1, m - A[i], n);
	return res;
}

int main(void)
{
	int n, q, m;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> m;
		if (solve(0, m, n))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}
