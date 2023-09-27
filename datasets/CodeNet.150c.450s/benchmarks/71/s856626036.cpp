#include <iostream>

using namespace std;

int main()
{
	int d;
	int ans;
	while (cin >> d) {
		ans = 0;
		for (size_t a = 0; a < 10; a++)
		{
			for (size_t b = 0; b < 10; b++)
			{
				for (size_t c = 0; c < 10; c++)
				{
					for (size_t e = 0; e < 10; e++)
					{
						if (a + b + c + e == d) { ans++; }
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}