#include<iostream>
using namespace std;
int main()
{
	int m = 0;
	int f = 0;
	int r = 0;
	while (1)
	{
		cin >> m >> f >> r;
		int a = 0;
		a = m + f;
		if (m == -1 && f == -1 && r == -1)break;

		if (m == -1){ cout << "F" << "\n"; }
		else if (f == -1){ cout << "F" << "\n"; }
		else if (80 <= a){ cout << "A" << "\n"; }
		else if (65 <= a&&a < 80){ cout << "B" << "\n"; }
		else if (50 <= a&&a < 65){ cout << "C" << "\n"; }
		else if (30 <= a&&a < 50 && 50 <= r){ cout << "C" << "\n"; }
		else if (30 <= a&&a < 50){ cout << "D" << "\n"; }
		else if (a < 30){ cout << "F" << "\n"; }
	}

	return 0;
}