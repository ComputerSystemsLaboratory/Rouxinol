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
#include <numeric>

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

//================================================

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N, yen = 100000;
	cin >> N;

	REP(i, N) {
		yen *= 1.05;
		if (yen % 1000 != 0) {
			yen += 1000;
			yen -= yen % 1000;
		}
	}

	cout << yen << "\n";
	return 0;
}