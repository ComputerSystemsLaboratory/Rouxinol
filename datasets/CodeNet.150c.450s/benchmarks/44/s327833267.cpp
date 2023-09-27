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

	int A1, A2, A3, A4;
	int B1, B2, B3, B4;
	while (cin >> A1 >> A2 >> A3 >> A4) {
		int hit = 0, blow = 0;
		vector<int>A(4);
		vector<int>B(4);

		A[0] = A1; A[1] = A2; A[2] = A3; A[3] = A4;
		REP(i, 4) cin >> B[i];

		REP(i, 4) {
			REP(j, 4) {
				if (A[i] == B[j]) {
					if (i == j) {
						hit++;
					} else {
						blow++;
					}
				}
			}
		}
		cout << hit << " " << blow << "\n";
	}
	return 0;
}