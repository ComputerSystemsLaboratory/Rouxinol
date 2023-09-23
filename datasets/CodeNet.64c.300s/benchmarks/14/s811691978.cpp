#include <iostream>
using namespace std;

void maxor(int x, int y)
{
	if (x == y) cout << "a == b\n";
	if (x > y) cout << "a > b\n";
	if (x < y) cout << "a < b\n";
}

int main()
{
	int x = 0, y = 0;
	cin >> x >> y;
	maxor(x, y);
	return 0;
}