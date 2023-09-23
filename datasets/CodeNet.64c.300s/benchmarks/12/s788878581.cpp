#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	if (1 <= x <= 100) {
		cout << x*x*x << '\n';
	}
	return 0;
}