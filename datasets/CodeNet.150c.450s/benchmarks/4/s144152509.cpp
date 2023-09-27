#include <iostream>
using  namespace std;
int main()
{
	char Result[10000];
	int m, f, r = 0;
	for (int i = 0; i<10000; i++)
	{
		cin >> m >> f >> r;
		if ((m == -1) || (f == -1))Result[i] = 'F';
		else if (m + f >= 80)Result[i] = 'A';
		else if (m + f >= 65)Result[i] = 'B';
		else if ((m + f >= 50) || (r >= 50))Result[i] = 'C';
		else if (m + f >= 30)Result[i] = 'D';
		else Result[i] = 'F';
		if ((m == -1) && (f == -1) && (r == -1))
		{
		r = i;
		break;
		}
	}
	for (int i = 0; i<r; i++)
	{
		cout << Result[i] << endl;
	}
	return 0;
}