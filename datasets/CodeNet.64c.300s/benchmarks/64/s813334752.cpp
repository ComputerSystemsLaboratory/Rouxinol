#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int x, y;
	cin >> x;
	cin >> y;

	while (y != 0){
		if (y > x){
			swap(x, y);
		}
		int bx = x;
		int by = y;
		x = by;
		y = bx%y;
	}
	cout << x << endl;
}