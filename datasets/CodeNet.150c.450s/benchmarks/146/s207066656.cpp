#include <iostream>
using namespace std;
int main()
{
	int n, i, j;
	double x[4], y[4];

	cin >> n;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 4; j++)
			cin >> x[j] >> y[j];

		if (((y[0]-y[1])/(x[0]-x[1])) == ((y[2]-y[3])/(x[2]-x[3])))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}