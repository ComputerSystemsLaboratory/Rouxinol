#include <iostream>
#include <limits.h>

using namespace std;

int main() {
	int n, nextNum, max = INT_MIN, preMin = INT_MAX;
	cin >> n;
	

	for (int i = 0; i < n; i++)
	{
		cin >> nextNum;
		if (nextNum - preMin > max) {
			max = nextNum - preMin;
		}
		if (nextNum < preMin) preMin = nextNum;
	}

	

	cout << max << endl;
	return 0;
}