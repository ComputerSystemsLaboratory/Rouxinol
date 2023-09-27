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
#include <sstream>

#define REP(i, n) for(int i = 0;i < (n); i++)
#define REP2(i, x, n) for(int i = (x); i < (n); i++)
#define RREP(i, n) for (int i = (n) - 1;i >= 0; i--)

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

	int W, N;
	vector<int> vec(40, 0);
	REP(i, 40) {
		vec[i] = i;
	}

	cin >> W >> N;
	REP(i, N) {
		int A, B;
		char C;
		cin >> A >> C >> B;
		swap(vec[A], vec[B]);
	}

	REP2(i, 1, W + 1) {
		cout << vec[i] << endl;
	}
	return 0;
}