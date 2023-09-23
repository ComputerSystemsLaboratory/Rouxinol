#include<iostream>

using namespace std;

int main()
{
	int m[51], f[51], r[51];
	int total;
	int i = 0;
	while (cin >> m[i] >> f[i] >> r[i], m[i] + f[i] + r[i] != -3) { i++; }
	i = 0;
	while (1)
	{
		if (m[i] == -1 && f[i] == -1 && r[i] == -1) break;
		total = m[i] + f[i];
		if (m[i] == -1 || f[i] == -1)
		{
			cout << "F" << endl;
		}
		else if (total < 30)
		{
			cout << "F" << endl;
		}
		else if (30 <= total && total < 50)
		{
			if (50 <= r[i])
			{
				cout << "C" << endl;
			}
			else
			{
				cout << "D" << endl;
			}
		}
		else if (50 <= total && total < 65)
		{
			cout << "C" << endl;
		}
		else if (65 <= total && total < 80)
		{
			cout << "B" << endl;
		}
		else
		{
			cout << "A" << endl;
		}
		i++;
	}
    return 0;
}
