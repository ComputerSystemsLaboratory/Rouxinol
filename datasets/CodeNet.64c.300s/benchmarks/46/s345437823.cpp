#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>
#include <map>
using namespace std;

#define REP(i, s, e) for (int i = (s); i < (e); i++)
#define REPI(i, s, e) for (int i = (s); i <= (e); i++)
#define rep(i, n) REP(i, 0, n)
#define repi(i, n) REPI(i, 0, n)
#define ALL(v) (v).begin(), (v).end()

#define dump(x) (cout << #x << " = " << x << endl)
#define dump2(x, y) (cout << "(" << #x << ", " << #y << ") = (" << x << ", " << y << ")" << endl)

typedef long long ll;
typedef pair<int, int> pii;

#define MAX 100000
bool prime[MAX];

void erat()
{
	fill(prime, prime+MAX, true);
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i < MAX; i++)
		for (int j = 2*i; j < MAX; j += i)
			prime[j] = false;
}

bool isprime(int n)
{
	if (n < MAX) return prime[n];
	if (n % 2 == 0) return false;
	for (int d = 3; d*d <= n; d += 2)
		if (n%d == 0)
			return false;
	return true;
}

int main(void)
{
	int a, d, n;
	erat();
	while (cin >> a >> d >> n, a|d|n) {
		int cnt = 0;
		for (int i = a;; i += d) {
			if (isprime(i) && ++cnt == n) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}