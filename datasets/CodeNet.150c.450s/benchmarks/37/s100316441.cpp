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

//================================================
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	double A, B, C, D, E, F, X, Y;
	while (cin >> A >> B >> C >> D >> E >> F) {
		X = (C * E - B * F) / (A * E - B * D);
		Y = (A * F - C * D) / (A * E - B * D);
		if (X == -0) X = 0.0;
		if (Y == -0) Y = 0.0;

		cout << fixed << setprecision(3) << X << " " << Y << "\n";
	}
	return 0;
}