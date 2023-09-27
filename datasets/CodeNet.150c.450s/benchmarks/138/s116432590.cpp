#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int x, y;
	cin >> x >> y;
	while(x > 0 && y > 0)
	{
		if (x >= y)
		{
			x %= y;
		} else 
		{
			y %= x; 
		}
	}
	cout << max(x, y) << endl;
	return 0;
}