#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Variable declaration
	int m = 0, f = 0, r = 0;
	string result;

	while (1)
	{
		// Input m, f, r
		cin >> m >> f >> r;

		// Check of value
		if (m == -1 && f == -1 && r == -1)
		{
			// End of Input.
			break;
		}
		else if (m < -1 || m > 50 || f < -1 || f > 50)
		{
			continue;
		}

		// Check of value
		if (m == -1 || f == -1)
		{
			result = "F";
		}
		else if (m + f >= 80)
		{
			result = "A";
		}
		else if (m + f >= 65 && m + f < 80)
		{
			result = "B";
		}
		else if (m + f >= 50 && m + f < 65)
		{
			result = "C";
		}
		else if (m + f >= 30 && m + f < 50)
		{
			result = "D";
			if (r >= 50)
			{
				result = "C";
			}
		}
		else if (m + f < 30)
		{
			result = "F";
		}

		// Output
		cout << result << endl;
	}

	return 0;
}