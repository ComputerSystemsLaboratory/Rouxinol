#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
	int n, i, j, k, c, d, x;
	char s[1025], t[10][6] = {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> s;
		for (j = x = 0, d = 0; j < strlen(s); j++)
		{
			c = s[j] - '0';
			if (c == 0 && d != 0)
			{
				cout << t[d-1][x%strlen(t[d-1])];
			}
			else if (d == c)
			{
				x++;
			}
			else
			{
				x = 0;
			}
			d = c;
		}
		cout << endl;
	}
}