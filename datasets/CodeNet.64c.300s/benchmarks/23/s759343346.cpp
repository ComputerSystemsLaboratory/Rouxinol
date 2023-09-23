#include <iostream>
using namespace std;

int main()
{
	int a, b;
	do{
	cin >> a >> b;
	} while (a, b < 1 || a, b > 100);
	cout << a * b << " " << 2 * a + 2 * b << endl;
	return 0;
}