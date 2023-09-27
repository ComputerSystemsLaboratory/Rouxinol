
/* vo00_09.cpp */

#include <iostream>
using namespace std;

const int N = 1000000;
int prime[N];

void init();

int main()
{
	init();

	int n;
	while (cin >> n) {
		
		cout << prime[n] << '\n';

	}

	return 0;
}

void init()
{
	for (int i = 0; i < N; ++i) { prime[i] = 1; }

	prime[0] = prime[1] = 0;

	for (int i = 2; i < N; ++i) {
		if (prime[i])
			for (int j = i * 2; j < N; j += i) { prime[j] = 0; }
	}

	int count = 0;
	for (int i = 0; i < N; ++i) { if (prime[i]) { count++; } prime[i] = count; }
}