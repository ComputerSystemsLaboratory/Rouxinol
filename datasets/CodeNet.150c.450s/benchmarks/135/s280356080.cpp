#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int N, M;
	while (cin >> N >> M, N || M)
	{
		vector<int> height(1500001);
		vector<int> width(1500001);
		vector<int> h(N);
		vector<int> w(M);
		for (int i = 0; i < N; ++i)
		{
			cin >> h[i];
		}
		for (int i = 0; i < M; ++i)
		{
			cin >> w[i];
		}
		int ans = 0;
		int sum = 0;
		for (int i = 0; i < N; ++i)
		{
			sum = 0;
			for (int j = i; j < N; ++j)
			{
				sum += h[j];
				height[sum]++;
			}
		}
		for (int i = 0; i < M; ++i)
		{
			sum = 0;
			for (int j = i; j < M; ++j)
			{
				sum += w[j];
				width[sum]++;
			}
		}
		for (int i = 0; i < height.size(); ++i)
		{
			ans += height[i] * width[i];
		}
		cout << ans << endl;
	}
}

int main()
{
	solve();
	return(0);
}