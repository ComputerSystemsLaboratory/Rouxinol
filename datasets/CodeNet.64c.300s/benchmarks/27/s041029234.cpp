#include <iostream>
using namespace std;

int main()
{
	int nN, nX;
	while (cin >> nN >> nX, nN | nX)
	{
		int nCount = 0;
		for (int a = 1; a < nX / 3; ++a)
		{
			for (int b = a + 1; b < nX * 2 / 3; ++b)
			{
				if (nX - a - b > b&&nX - a - b <= nN)
				{
					nCount++;
				}
			}
		}
		cout << nCount << endl;
	}
	//getchar();
	return 0;
}