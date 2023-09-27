#include <iostream>
#include <vector>
#include <algorithm>

#define ADD 0
#define GETSUM 1

using namespace std;

vector<int> a;

void _add(int index, int n) {
	a[index] += n;
}

void get_sum(int s, int t) {
	int sum = 0;

	for(int i = s;i <= t;i++) {
		sum += a[i];
	}

	cout << sum << endl;
}

int main() {
	int n, q, com, x, y;

	cin >> n >> q;

	a.resize(n);
	fill(a.begin(), a.end(), 0);

	for(int i = 0;i < q;i++) {
		cin >> com >> x >> y;

		switch(com) {
			case ADD:
				x--;
				_add(x, y);
				break;

			case GETSUM:
				x--;
				y--;
				get_sum(x, y);
				break;
		}
	}

	return 0;
}
	


