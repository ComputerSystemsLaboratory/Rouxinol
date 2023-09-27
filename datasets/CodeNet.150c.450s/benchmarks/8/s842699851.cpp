#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int taro = 0;
	int hanako = 0;
	string t, h;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		cin >> h;
		if (t == h)
		{
			taro += 1;
			hanako += 1;
		}
	else
	{
		if (t > h)
		{
			taro += 3;
		}
		else
		{
			hanako += 3;
		}
	}
	}
	cout << taro << " " << hanako << endl;

	return 0;
}