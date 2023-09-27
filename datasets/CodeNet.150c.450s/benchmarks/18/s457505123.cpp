
/* vo00_07.cpp */
#include <iostream>
using namespace std;

int main()
{
	double debt = 100000;

	int n;
	cin >> n;
	
	while (n--) {
		debt *= 1.05;
		debt /= 1000;
		debt += 0.999;
		debt = (int)debt;
		debt *= 1000;
	}

	cout << (int)debt << '\n';

	return 0;
}