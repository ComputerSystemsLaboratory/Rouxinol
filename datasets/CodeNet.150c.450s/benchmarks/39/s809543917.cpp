#include <iostream>
using namespace std;

int main()
{
	double a, b, area, per;

	cin >> a >> b;
	area = a * b;
	per = 2 * (a + b);
	cout << area << " " << per << endl;

	return 0;
}