#include <iostream>

using namespace std;

int main()
{
	int m, f, r;
	int g;
	
	while (1)
	{
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1)
			break;
		
		g = 'F'; // A +5 = F
		if (m == -1 || f == -1)
			g = 'F';
		else if ((m+f) >= 80)
			g = 'A';
		else if ((m+f) >= 65)
			g = 'B';
		else if ((m+f) >= 50)
			g = 'C';
		else if ((m+f) >= 30)
		{
			g = 'D';
			if (r >= 50)
				g = 'C';
		}
		else if ((m+f) < 30)
			g = 'F';
		
		cout << (char)g << endl;
	}

	return 0;
}