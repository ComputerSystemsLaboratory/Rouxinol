#include <iostream>
#include <cstdio>
using namespace std;


int main()
{
	int max;
	int currentSum;
	int loop;
	int a[5005];

	while (cin >> loop, loop) {
		// O(n)
		for (int i = 0; i<loop; i++) {
			cin >> a[i];
		}

		// O(n^2)
		max = a[0], currentSum = 0;
		for (int j = 0; j<loop; j++) {
			for (int k = j; k<loop; k++) {
				currentSum += a[k];
				if (currentSum > max)
					max = currentSum;
			}
			currentSum = 0;
		}
		cout << max << endl;
	}
	return 0;
}
