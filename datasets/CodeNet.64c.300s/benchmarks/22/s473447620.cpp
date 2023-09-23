#include<iostream>
using namespace std;
int main()
{
	int a, b, c, n;
	bool _bool = false;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		_bool = false;
		if (a * a == (b* b + c * c) || b*b == a*a + c*c || c*c == a* a + b* b)
		{
			_bool = true;
		}
		if (_bool)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}


	return 0;
}