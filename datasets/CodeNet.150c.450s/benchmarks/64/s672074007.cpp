#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solve(int *A, int n, int pos, int target)
{
	if (0 == target) return true;
	if (pos >= n) return false;
	return solve(A, n, pos + 1, target) || solve(A, n, pos + 1, target - A[pos]);
}

int main()
{
	int n;
	cin >> n;

	int A[20];
	int i = 0;
	while (i < n) cin >> A[i++];

	int target, q;
	cin >> q;

	while (cin >> target)
	{
		cout << (solve(A, n, 0, target) ? "yes" : "no") << endl;
	}

	return 0;
}