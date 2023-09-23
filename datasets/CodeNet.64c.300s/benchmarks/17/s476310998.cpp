#include <iostream>
#include <string>

using namespace std;

int main() {
	while (1)
	{
		int x, y, s;

		cin >> x >> y >> s;

		if (x + y + s == 0)
		{
			break;
		}

		int max = 0;
		for(int p1 = 1; p1 < s; ++p1)
		{
			for (int p2 = 1; p2 < s; ++p2)
			{
				if (p1 * (100 + x) / 100 + p2 * (100 + x) / 100 == s)
				{
					int s_after = p1 * (100 + y) / 100 + p2 * (100 + y) / 100;
					if (s_after > max)
						max = s_after;
				}
			}
		}
		cout << max << endl;
	}
	return 0;
}