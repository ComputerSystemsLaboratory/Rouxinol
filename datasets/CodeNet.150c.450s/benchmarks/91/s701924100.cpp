#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	int count;
	while (cin >> n, !cin.eof())
	{
		count = 0;
		vector<int> p(n + 1, 1);
		p[1] = 0;
		for (int i = 2; i * i <= n; i++)
		{
			if (p[i] == 0) continue;
			for (int j = 2; i * j <= n; j++)
			{
				p[i * j] = 0;
			}
		}
		for (int i = 1; i <= n; i++)
		{
			count += p[i];
		}
		cout << count << endl;
	}
	return 0;
}
