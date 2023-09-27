#include <iostream>
using namespace std;
int main()
{
	long long m, n, a, b = 0, c = 0, num = 1;
	cin >> m >> n;
	a = m;
	for (int i = 1; i < n; i++)
	{
		m = m * a;
		if (m > 1000000007)
		{
			b = m;
			num = (num * (b % 1000000007)) % 1000000007;
			m = 1;
			c = 1;
		}
	}
	if(c == 1)
    {
        num = (num * (m % 1000000007)) % 1000000007;
        cout << num << endl;
    }
	else cout << m << endl;
	return 0;
}

