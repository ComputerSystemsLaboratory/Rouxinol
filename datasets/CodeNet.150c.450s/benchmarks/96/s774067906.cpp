#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cycle[10] = { 1, 5, 3, 3, 3, 3, 3, 4, 3, 4 };
	char c[10][5] =
	{
		{ '0' },
		{ '.', ',', '!', '?', ' ' },
		{ 'a', 'b', 'c' },
		{ 'd', 'e', 'f' },
		{ 'g', 'h', 'i' },
		{ 'j', 'k', 'l' },
		{ 'm', 'n', 'o' },
		{ 'p', 'q', 'r', 's' },
		{ 't', 'u', 'v' },
		{ 'w', 'x', 'y', 'z' },
	};

	int n;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;

		int count = 0;
		char output = '0';

		for (char i : s)
		{
			if (i == '0' && output != '0')
			{
				cout << output;
				output = '0';
				count = 0;
			}
			output = c[i - '0'][count];
			count++;
			if (count >= cycle[i - '0']) count = 0;
		}
		cout << endl;
	}

	return 0;
}