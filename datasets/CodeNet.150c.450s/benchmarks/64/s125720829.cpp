#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> Q;

bool solve(int n, int i, int m)
{
	// ??????????????????????????????0???????§£
	if (m == 0)
		return true;
	
	// Q???????´???°??\???????????¨??§?????????
	if (i >= n)
		return false;

	// Q[i]???????????´?????¨??????????????´?????????????????¢?´¢
	return solve(n, i + 1, m) || solve(n, i + 1, m - Q[i]);
}

int main()
{
	int A, N, M;
	string ans;
	cin >> N;

	Q.resize(N);
	for (int i = 0; i < N; i++)
		cin >> Q[i];

	cin >> A;

	// ???M??????????????¢?´¢
	for (int i = 0; i < A; i++)
	{
		cin >> M;

		ans += solve(N, 0, M) ? "yes\n" : "no\n";
	}

	cout << ans;

	return 0;
}