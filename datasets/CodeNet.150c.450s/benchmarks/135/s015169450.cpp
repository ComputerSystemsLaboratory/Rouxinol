#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve()
{
	int N, M;
	while(cin >> N >> M, N || M)
	{
		vector<int> Vech(N);
		vector<int> Vecw(M);
		map<int, int> Map;
		for(int i = 0; i < N; ++i)
		{
			cin >> Vech[i];
		}
		for(int i = 0; i < M; ++i)
		{
			cin >> Vecw[i];
		}
		for(int i = 0; i < M; ++i)
		{
			int w = Vecw[i];
			Map[w]++;
			for(int j = i + 1; j < M; ++j)
			{
				w += Vecw[j];
				Map[w]++;
			}
		}

		int count = 0;
		for(int i = 0; i < N; ++i)
		{
			int h = Vech[i];
			count += Map[h];
			for(int j = i + 1; j < N; ++j)
			{
				h += Vech[j];
				count += Map[h];
			}
		}
		cout << count << endl;
	}
}

int main()
{
	solve();
	return(0);
}