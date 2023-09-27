#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << n << ":";
	int p = 2;
	int m = n;
	do
	{
		if (n % p == 0) {
			cout << " " << p;
			n /= p;
		}
		else
		{
			p++;
		}
	} while ((n > 1) && (p * p <= m));
	if (n > 1) {
		cout << " " << n;
	}
	cout << endl;
	return 0;
}
