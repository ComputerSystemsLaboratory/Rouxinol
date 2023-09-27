#include <iostream>

using namespace std;

int n, s;
int count = 0;

void DFS(int sum, int pre, int depth)
{
	if(depth > n || sum > s)
	{
		return;
	}
	else if(sum == s && depth == n)
	{
		++count;
		return;
	}
	for(int i = pre + 1; i < 10; ++i)
	{
		DFS(sum + i, i, depth + 1);
	}
}

void solve()
{
	while(cin >> n >> s, n || s)
	{
		count = 0;
		for(int i = 0; i < 10; ++i)
		{
			DFS(i, i, 1);
		}
		cout << count << endl;
	}
}

int main()
{
	solve();
	return(0);
}