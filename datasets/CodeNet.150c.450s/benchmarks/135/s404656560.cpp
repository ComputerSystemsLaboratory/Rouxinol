#include <stdio.h>
#include <vector>
#include <map>

auto solve(int N, int M) -> int
{
	using namespace std;
	vector<int> h(N);
	vector<int> w(M);

	for(int i = 0; i < N; i++)
	{
		int x;
		scanf("%d", &x);
		h[i] = x;
	}
	for(int i = 0; i < M; i++)
	{
		int x;
		scanf("%d", &x);
		w[i] = x;
	}

	map<int, int> eh;
	map<int, int> ew;
	for(int i = 0; i < N; i++)
	{
		int sum = 0;
		for(int j = i; j < N; j++)
		{
			sum += h[j];
			if(eh.find(sum) != ew.end())
				eh[sum]++;
			else
				eh[sum] = 1;
		}
	}
	for(int i = 0; i < M; i++)
	{
		int sum = 0;
		for(int j = i; j < M; j++)
		{
			sum += w[j];
			if(ew.find(sum) != ew.end())
				ew[sum]++;
			else
				ew[sum] = 1;
		}
	}

	int ans = 0;
	for(auto p : eh)
	{
		if(ew.find(p.first) != ew.end())
			ans += p.second * ew[p.first];
	}

	return ans;
}

auto main() -> int
{
	int n, m;
	while(1)
	{
		scanf("%d%d", &n, &m);
		if(!(n | m))
			break;
		printf("%d\n", solve(n, m));
	}
}