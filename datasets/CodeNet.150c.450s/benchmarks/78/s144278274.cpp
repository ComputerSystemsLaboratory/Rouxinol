#include <iostream>
#include <vector>

using namespace std;
static const int INF = 999999999;
vector<int> tetrahedral;
int min_depth;
int min_odd_depth;
int n;

void DFS(int pos, int depth, int sum)
{
	if(depth >= min_depth)
	{
		return;
	}
	if(sum == n)
	{
		if(depth < min_depth)
		{
			min_depth = depth;
		}
		return;
	}
	else if(sum > n)
	{
		return;
	}
	else
	{
		for(int i = pos; i >= 0; --i)
		{
			DFS(i, depth + 1, sum + tetrahedral[i]);
		}
	}
}

void DFS2(int pos, int depth, int sum)
{
	if(depth >= min_odd_depth)
	{
		return;
	}
	if(sum == n)
	{
		if(depth < min_odd_depth)
		{
			min_odd_depth = depth;
		}
		return;
	}
	else if(sum > n)
	{
		return;
	}
	else
	{
		for(int i = pos; i >= 0; --i)
		{
			if(tetrahedral[i] % 2)
			{
				DFS2(i, depth + 1, sum + tetrahedral[i]);
			}
		}
	}
}

void solve()
{
	for(int i = 1; i * (i + 1) * (i + 2) / 6 <= 1000000; ++i)
	{
		tetrahedral.push_back(i * (i + 1) * (i + 2) / 6);
	}
	while(cin >> n, n)
	{
		min_depth = INF;
		min_odd_depth = INF;
		int pos = 0;
		while(tetrahedral[pos] < n)
		{
			++pos;
		}
		for(int i = pos; i >= 0; --i)
		{
			DFS(i, 1, tetrahedral[i]);
		}
		while(tetrahedral[pos] % 2 == 0)
		{
			--pos;
		}
		for(int i = pos; i >= 0; --i)
		{
			if(tetrahedral[i] % 2)
			{
				DFS2(i, 1, tetrahedral[i]);
			}
		}
		cout << min_depth << " " << min_odd_depth << endl;
	}
}

int main()
{
	solve();
	return(0);
}