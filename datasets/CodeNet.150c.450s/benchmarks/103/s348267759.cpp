



#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

#define PI	pair<int , int>
#define MP	make_pair



PI input;
int ans;


void Dfs(int n , int now , int index)
{
	if (n > input.first || now > input.second)	{	return ;}

	if (n == input.first)
	{
		if (input.second == now)
		{
			ans++;
		}
		return;
	}

	for (int i = index + 1; i < 10; i++)
	{
		Dfs(n + 1 , now + i , i);
	}
}


int main(void)
{
	while (1)
	{
		ans = 0;
		cin >> input.first >> input.second;

		if (input.first == 0 && input.second == 0)
		{
			break;
		}

		for (int i = 0; i < 10; i++)
		{
			Dfs(1 , i , i);
		}

		cout << ans << endl;
	}

	return 0;
}