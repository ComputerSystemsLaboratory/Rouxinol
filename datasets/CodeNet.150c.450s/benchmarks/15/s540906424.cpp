#include <iostream>

using namespace std;

static const int N_MAX = 10000;

int linearSearch(int S[], int n, int t);

int main()
{
	int i, n, q, t, c = 0;
	int S[N_MAX] = {0};

	cin >> n;
	for (i = 0; i < n; i++)
		cin >> S[i];

	cin >> q;
	for (i = 0; i < q; i++) {
		cin >> t;
		c += linearSearch(S, n, t);
	}

	cout << c << endl;

	return 0;
}

int linearSearch(int S[], int n, int t) {
	int i = 0;
	S[n] = t;

	while (S[i] != t) i++;

	if (i == n)
		return 0;
	else
		return 1;
}