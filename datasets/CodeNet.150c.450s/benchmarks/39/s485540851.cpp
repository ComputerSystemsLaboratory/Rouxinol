#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int area = 0;
	int aroundLength = 0;

	cin >> a;
	cin >> b;

	area = a * b;
	aroundLength = (a + b) * 2;

	cout << area << " " << aroundLength << endl;

	return 0;
}