#include <iostream>
using namespace std;

void Swap(int *x, int *y) {
	int z;
	z = *x;
	*x = *y;
	*y = z;
}
int main()
{
	int x, y;
	cin >> x >> y;
	if (y > x)
		Swap(&x, &y);

	while (x%y != 0) {
		x = x%y;
		Swap(&x, &y);
	}
	cout << y << endl;
}