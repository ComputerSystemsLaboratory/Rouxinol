#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int n, k;
	while(cin >> n >> k, n || k)
	{
		int max = 0;
		int sum = 0;
		vector<int> Vec(n);
		for(int i = 0; i < n; ++i)
		{
			cin >> Vec[i];
		}
		for(int i = 0; i < k; ++i)
		{
			sum += Vec[i];
		}
		if(max < sum)
		{
			max = sum;
		}
		for(int i = 1; i + k - 1 < n; ++i)
		{
			sum -= Vec[i - 1];
			sum += Vec[i + k - 1];
			if(max < sum)
			{
				max = sum;
			}	
		}
		cout << max << endl;
	}
}

int main()
{
	solve();
	return(0);
}