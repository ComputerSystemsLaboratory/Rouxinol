#include <iostream>
using namespace std;

int n, s, m;

void sm(int i, int j, int r) {
	if (i == 10) {
		if (j == n && r == s)
			m++;
	}
	else {
		sm(i + 1, j + 1, r + i);
		sm(i + 1, j, r);
	}
}

int main()
{	
	cin >> n >> s;

	while (n > 0 || s > 0) {
		m = 0;

		sm(0, 0, 0);
		cout << m << endl;

		cin >> n >> s;
	}

	return 0;
}

