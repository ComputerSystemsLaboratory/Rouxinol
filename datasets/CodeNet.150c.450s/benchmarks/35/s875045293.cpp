#include<iostream>
#include<algorithm>
using namespace std;

static const int MIN = -1 * (1 << 21);

int main() {
	int i, j, n, a, maxa, max_so_far, max_ending_here;
	
	while (1) {
		cin >> n;
		if (n == 0)break;
		max_so_far = 0;
		max_ending_here = 0;
		maxa = MIN;
		for (i = 0; i < n; i++) {
			cin >> a;
			maxa = max(maxa, a);
			max_ending_here = max_ending_here + a;
			if (max_ending_here < 0)max_ending_here = 0;
			if (max_so_far < max_ending_here)max_so_far = max_ending_here;
		}
		if (max_so_far == 0)max_so_far = maxa;
		cout << max_so_far << endl;

	}

	return 0;
}