#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, x;
	int roop = 0;
	vector<int> count(10001, -1);
	while (cin >> n >> x, n != 0)
	{
		count[roop]++;
		for (int i = 1; i <= n - 2; i++)
		{
			for (int j = i + 1; j <= n - 1; j++)
			{
				for (int k = j + 1; k <= n; k++)
				{
					if (i + j + k == x)
					{
						count[roop]++;
					}
				}
			}
		}
		roop++;
	}
	roop = 0;
	while(count[roop] != -1)
	{
		cout << count[roop++] << endl;
	}
    return 0;
}

