#include <iostream>

using namespace std;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		int count = 0;
		for(int i = 1; i < n / 2 + 1; ++i)
		{
			int sum = 0;
			for(int j = i; j < n / 2 + 2; ++j)
			{
				sum += j;
				if(sum == n)
				{
					count++;
				}
				else if(sum > n)
				{
					break;
				}
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