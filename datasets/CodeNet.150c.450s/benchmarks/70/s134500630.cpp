#include <iostream>
#include <string>
using namespace std;

string w[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

int main()
{
	int m, d;
	while (cin >> m >> d, m)
	{
		int y = 2004;
		if (m < 3)
		{
			y--;
			m += 12;
		}

		int z = (y + y/4 - y/100 + y/400 + (13*m+8)/5 + d) % 7;
		cout << w[z] << endl;
	}
}