#include <iostream>
using namespace std;
int main()
{
	int m, f, r;
	char student[300];
	int count = 0;
	while (true)
	{
		cin >> m >> f >> r;

		if (m == -1 && f == -1 && r == -1)
		{
			break;
		}
		int total = m + f;
		if (m == -1 || f == -1 || total < 30)
		{
			student[count] = 'F';
		}
		else if (total >= 80)
		{
			student[count] = 'A';
		}
		else if (total >= 65)
		{
			student[count] = 'B';
		}
		else if (total >= 50)
		{
			student[count] = 'C';
		}
		else if (total >= 30)
		{
			student[count] = 'D';
			if (r >= 50)
			{
				student[count] = 'C';
			}
		}

		count++;
	}

	for (int i = 0; i < count; i++) {
		cout << student[i] << endl;
	}

	return 0;
}
