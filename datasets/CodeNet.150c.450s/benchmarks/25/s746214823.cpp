#include<iostream>
#include<string>

using namespace std;

int ans[30] = {};

int main()
{
	string x;
	int y;
	while (cin >> x)
	{
		for (int i = 0; i < x.length(); i++)
		{
			if ('a' <= x[i] && x[i] <= 'z')
			{
				y = x[i] - 'a';
				ans[y]++;
			}
			else if ('A' <= x[i] && x[i] <= 'Z')
			{
				y = x[i] - 'A';
				ans[y]++;
			}
		}
	}
		for (int i = 0; i < 26; i++)
		{
			cout << char(i + 'a') << " : " << ans[i] << endl;
		}
	return 0;
}