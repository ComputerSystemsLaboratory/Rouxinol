#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int i;
	int counter = 0;
	for (i = a; i <= b; i++) {
		if (c % i == 0) counter++;
	}
	cout << counter << "\n";

	return 0;
}