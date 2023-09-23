#include <iostream>
using namespace std;

int main()
{
	int a[4], b[4], hit, blow;

	while (1)
	{
		hit = 0;
		blow = 0;

		cin >> a[0];
		if (cin.eof()) break;
		cin >> a[1] >> a[2] >> a[3];
		cin >> b[0] >> b[1] >> b[2] >> b[3];

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (a[i] == b[j])
				{
					if (i == j)
						hit++;
					else
						blow++;
				}
			}
		}

		cout << hit << " " << blow << endl;
	}
	return 0;
}