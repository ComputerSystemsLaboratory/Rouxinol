#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n--)
	{
		int memo1[1005] = {};
		int memo2[1005] = {};
		string a, b;
		cin >> a >> b;

		for (int i = 1; i <= a.size(); i++)
		{
			for (int j = 1; j <= b.size(); j++)
			{
				if (a[i - 1] == b[j - 1])
					memo2[j] = max({ memo2[j - 1], memo1[j], memo1[j - 1] + 1 });
				else
					memo2[j] = max(memo2[j - 1], memo1[j]);
			}
			swap(memo1, memo2);
			memo2[0] = 0;
		}

		cout << memo1[b.size()] << endl;
	}

	return 0;
}