#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <istream>
#include <sstream>
#include <iomanip>
using namespace std;

typedef ostringstream oss;
typedef istringstream iss;

typedef vector<int> vi;
typedef vector< vi > vvi;

typedef long L;
typedef long long LL;

const int SECOND_OF_DAY = 24 * 60 * 60;

LL toSecond(int h, int m, int s) {
	return (LL)h * 60 * 60 + (LL)m * 60 + (LL)s;
}

int main(void) {
	int N;
	while (cin >> N, N) {
		vi time(SECOND_OF_DAY, 0);

		for (int i = 0; i < N; i++) {
			int h, m, s;
			char buf;
			cin >> h >> buf >> m >> buf >> s;
			LL start = toSecond(h, m, s);
			cin >> h >> buf >> m >> buf >> s;
			LL end = toSecond(h, m, s);

			for (LL i = start; i < end; i++) {
				time[i]++;
			}
		}

		cout << *(max_element(time.begin(), time.end())) << endl;
	}

	return 0;
}