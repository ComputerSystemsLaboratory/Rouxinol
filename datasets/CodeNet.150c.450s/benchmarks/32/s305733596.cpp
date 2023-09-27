#include "bits/stdc++.h"
using namespace std;
#define mod 1000000007
#define all(c) begin(c),end(c)
template <typename T> T &chmin(T &a, const T &b) { return a = min(a, b); }
template <typename T> T &chmax(T &a, const T &b) { return a = max(a, b); }
using ll = long long;
using vi = vector<int>; using vs = vector<string>;
int dd[] = { 0, 1, 0, -1, 0 }; //→↓←↑

void solve()
{
	int M, MIN, MAX;
	while (cin >> M >> MIN >> MAX, M)
	{
		vector<int> A(M);
		for (int i = 0; i < M; i++) {
			cin >> A[i];
		}
		sort(A.begin(), A.end());
		reverse(A.begin(), A.end());
		int gap = -1;
		int ans = -1;
		for (int i = MIN - 1; i < MAX; i++)
		{
			if (gap <= A[i] - A[i + 1])
			{
				gap = A[i] - A[i + 1];
				ans = i + 1;
			}
		}
		cout << ans << endl;
	}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	solve();
	return 0;
}
