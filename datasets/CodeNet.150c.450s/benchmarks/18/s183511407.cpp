#include <iostream>
using namespace std;

int main()
{
	int m = 100000, n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		m = (int)(m*1.05);
		if (m % 1000 != 0)
			m += 1000;
		m /= 1000;
		m *= 1000;
	}
	cout << m << endl;

	return 0;
}