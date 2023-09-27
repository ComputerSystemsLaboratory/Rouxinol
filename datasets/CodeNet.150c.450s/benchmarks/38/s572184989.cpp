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
	
	int N;
	cin >> N;
	vector<string>ans(N);

	REP(i, N) {
		vector<int>vec(3);
		REP(j, 3) cin >> vec[j];
		SORT(vec);

		int a = vec[0] * vec[0];
		int b = vec[1] * vec[1];
		int c = vec[2] * vec[2];

		if (a + b == c) ans[i] = "YES";
		else ans[i] = "NO";
	}

	REP(i, N) cout << ans[i] << "\n";
	return 0;
}