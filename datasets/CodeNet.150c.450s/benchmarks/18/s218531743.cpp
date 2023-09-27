#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double d = 100000;
	while (n--)
	{
		d += 5. / 100 * d;
		d = ceil(d / 1000) * 1000;
	}
	cout << fixed << setprecision(0) << d << endl;
	return 0;
}