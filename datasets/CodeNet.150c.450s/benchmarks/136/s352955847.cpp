#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <deque>
#include <algorithm>
#include <iomanip>
#include <functional>

#define REP(i, n) for(int i = 0;i < (n); i++)
#define REP2(i, x, n) for(int i = (x); i < (n); i++)
#define REPR(i, n) for(int i = (n); i >= 0; i--)

#define ALL(a) (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define DESCSORT(c) sort(c.begin(), c.end(), greater<int>())

#define LL long long int
#define LD long double

#define PI 3.14159265358979

using namespace std;

LL gcd(LL a, LL b) {
	if (b > 0) {
		return gcd(b, a % b);
	} else {
		return a;
	}
}

LL lcm(LL a, LL b) {
	return ((a / gcd(a, b)) * b);
}

//================================================

int main() {
	LL A, B;

	while (cin >> A >> B) {
		cout << gcd(A, B) << " " << lcm(A, B) << "\n";
	}
}