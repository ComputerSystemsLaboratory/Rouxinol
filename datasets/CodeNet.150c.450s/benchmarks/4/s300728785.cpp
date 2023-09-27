#include <iostream>

using namespace std;

//int m,f,r;
//int ans = 0;

int main()
{
	while(1)
	{
		int ans = 0;
		int m = 0,f = 0,r = 0;

		cin >> m >> f >> r;

		if(m == -1 && f == -1 && r == -1)
		{
			break;
		}
		
		if(f == -1 || m == -1)
		{
			cout << "F" << endl;
			continue;
		}

		else
			ans += m;
			ans += f;

		if(ans >= 80)
		{
			cout << "A" << endl;
		}
		else if(ans < 80 && ans >= 65)
			{
				cout << "B" << endl;
			}
			else if(ans >= 50 && ans < 65 || r >= 50)
			{
				cout << "C" << endl;
			}
			else if(ans < 50 && ans >= 30)
			{
				cout << "D" << endl;
			}

			else if(ans < 30)
			{
				cout << "F" << endl;
			}
	}

	return 0;
}