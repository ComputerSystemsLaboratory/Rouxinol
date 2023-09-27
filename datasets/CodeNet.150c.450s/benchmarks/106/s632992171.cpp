#include <iostream>
using namespace std;

int main()
{
	int a, b, c, num = 0;
	cin >> a >> b >> c;
	for (int i = 0; b >= a + i; i++) {
		if (c%(i + a) == 0) {
		num= num + 1;
		}
	}
	cout << num << '\n';

	return 0;
}