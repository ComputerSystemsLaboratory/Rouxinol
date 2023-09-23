#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

// Dirichlet's Theorem on Arithmetic Progressions(1141)
int main()
{
	//freopen("1141.txt", "r", stdin);
	const int MAX = 1000000+1;
	static bool prime[MAX];
	for (int i = 0; i < MAX; ++i)
		prime[i] = true;
	prime[0] = prime[1] = false;

	for (int i = 0; i*i < MAX+1; ++i) {
		if (prime[i]) {
			for (int j = i+i; j < MAX; j += i)
				prime[j] = false;
		}
	}

	int a, d, n;
	while (cin >> a >> d >> n) {
		if (a == 0 && d == 0 && n == 0)
			break;

		int cnt = 0;
		for (int i = 0; ; ++i) {
			int seq = a + d*i;
			if (prime[seq])
				++cnt;
			if (cnt == n) {
				cout << seq << endl;
				break;
			}
		}
	}

	return 0;
}