
/* vo0_02.cpp */
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int count;

	while (true) {

		cin >> a >> b;
		if (cin.eof()) break;

		c = a + b;
		
		count = 1;
		for (; c >= 10; c /= 10) count++;

		cout << count << '\n';
	}

	return 0;
}