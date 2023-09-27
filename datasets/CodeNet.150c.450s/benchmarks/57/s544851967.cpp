#include <map>
#include <set>
#include <list>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <utility>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define INF (1 << 30)
#define INFL (1LL << 62)
#define MOD7 1000000007
#define MOD9 1000000009
#define EPS 1e-10

#define ll long long
#define ull unsigned long long
#define all(a) (a).begin(), (a).end()

int main() {
	int a, b, n;
	char op;
	while (cin >> a >> op >> b && op != '?') {
		switch (op) {
		case '+':
			n = a + b; break;
		case '-':
			n = a - b; break;
		case '/':
			n = a / b; break;
		case '*':
			n = a * b; break;
		}
		cout << n << endl;
	}

	return 0;
}
