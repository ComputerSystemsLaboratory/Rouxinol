#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int c1[10000] = {0};

	int length = 0;
	for (int i = 1; i <= c; i++)
	{
		if (c % i == 0)
		{
			c1[length] = i;
			length++;
		}
	}
	
	int count = 0;
	for (int i = a; i <= b; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (i == c1[j])
			{
				count++;
			}
		}
	}
	cout << count << endl;
}
