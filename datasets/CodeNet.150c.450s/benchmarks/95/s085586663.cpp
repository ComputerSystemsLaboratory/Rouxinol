#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	while (cin >> n, n)
	{
		int count = 0;
		bool next = true;
		bool L = false, R = false;

		for (int i = 0; i < n; i++)
		{
			string s;
			cin >> s;
			if (s == "lu") L = true;
			if (s == "ru") R = true;
			if (s == "ld") L = false;
			if (s == "rd") R = false;
			if (L == next && R == next)
			{
				next = !next;
				count++;
			}
		}
		cout << count << endl;
	}

	return 0;
}