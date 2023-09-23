#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	long int sum = 0;
	int minx, maxx;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;

		if (i == 0) {
			minx = temp;
			maxx = temp;
		}
		else {
			minx = min(minx, temp);
			maxx = max(maxx, temp);
		}

		sum += temp;
	}

	cout << minx << " " << maxx << " " << sum << endl;

	return 0;
}