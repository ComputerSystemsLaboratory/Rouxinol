#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
#include <sstream>


using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int a, c, ans = 0;
	char b;
	while (1)
	{
		cin >> a >> b >> c;
		if (b == '?') break;
		switch (b)
		{
		case('+'): ans = a + c; break;
		case('-'): ans = a - c; break;
		case('*'): ans = a * c; break;
		case('/'): ans = a / c; break;
		}
		cout << ans << endl;
	}
	return 0;
}