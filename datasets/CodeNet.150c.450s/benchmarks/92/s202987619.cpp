#include<iostream>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		int c = a + b;
		int count = 1;
		while (c >= 10)
		{
			c /= 10;
			count++;
		}
		cout << count << endl;
	}
	return 0;
}