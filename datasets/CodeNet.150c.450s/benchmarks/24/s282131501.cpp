#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
typedef pair<int, int> P;

void solve()
{
	int N, M;
	while (cin >> N >> M, N || M)
	{
		vector<P> data(N);
		for (int i = 0; i < N; ++i)
		{
			cin >> data[i].second >> data[i].first;
		}
		sort(data.begin(), data.end(), greater<P>());
		for (int i = 0; i < N; ++i)
		{
			if (M >= data[i].second)
			{
				M -= data[i].second;
				data[i].second = 0;
			}
			else
			{
				data[i].second -= M;
				M = 0;
				break;
			}
		}
		int sum = 0;
		for (int i = 0; i < N; ++i)
		{
			sum += data[i].first * data[i].second;
		}
		cout << sum << endl;
	}
}

int main()
{
	solve();
	return(0);
}