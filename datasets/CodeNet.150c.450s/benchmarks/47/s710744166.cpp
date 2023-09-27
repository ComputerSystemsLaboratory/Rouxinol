#include <iostream>
using namespace std;

void doStdOut(const char *str){ cout << str << endl; }

int main()
{
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;

	if( x < r || y < r || x + r > W || y + r > H )
	{
		doStdOut("No");
	}
	else
	{
		doStdOut("Yes");
	}
	return 0;
}