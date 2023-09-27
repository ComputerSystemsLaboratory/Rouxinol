#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int kazu = 0;
	int b = 0;
	int c = 0;
	cin >> kazu;
	for (int i = 0; i < kazu; i++)
	{
		cin >> a;
		cin >> b;
		cin >> c;
		if (a * a + b * b == c * c)
		{
			cout << "YES" << endl;
		}
		else if (a * a + c * c == b * b)
		{
			cout << "YES" << endl;
		}
		else if (c * c + b * b == a * a)
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