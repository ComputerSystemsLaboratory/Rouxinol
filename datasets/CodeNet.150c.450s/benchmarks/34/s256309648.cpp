#include <iostream>

using namespace std;

int n;
int memo[366];

int dfs(int num)
{
	
	int sum = 0;

	if(memo[num] != -1)
	{
		return memo[num];
	}

	if(num == n)
	{
		return 1;
	}

	if(num < n)
		sum += dfs(num + 1);

	if(num < n)
		sum += dfs(num + 2);

	if(num < n)
		sum += dfs(num + 3);

	memo[num] = sum;

	return sum;
}

int main()
{

	while(1)
	{
		cin >> n;

		for(int i = 0; i <= 31; i++)
		{
			memo[i] = -1;
		}

		if(n == 0)
		{
			break;
		}

		cout << dfs(0)/10/365+1 << endl;
	}
}