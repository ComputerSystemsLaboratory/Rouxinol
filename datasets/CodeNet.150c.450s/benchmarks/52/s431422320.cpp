#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int queue[100], input, i = 0;
	while (cin >> input) {
		if (input != 0) {
			queue[i] = input;
			++i;
		}
		else {
			--i;
			cout << queue[i] << endl;
			queue[i] = 0;
		}
	}
	return 0;
}