#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)

int num(int y, int m, int d) {
	int ans = 0;
	int year = (20 + 19) * 5;
	int year_div3 = 20 * 10;
	
	REP(i, 1, y) {
		ans += (i % 3 == 0) ? year_div3 : year;
	}
	REP(i, 1, m) {
		if (y % 3 != 0 && i % 2 == 0) {
			ans += 19;
		}
		else {
			ans += 20;
		}
	}
	ans += d;

	return ans;
}
int main() {
	int n;

	cin >> n;
	REP(j, 0, n) {
		int Y, M, D;
		cin >> Y >> M >> D;

		cout << num(1000, 1, 1) - num(Y, M, D) << endl;
	}
	return 0;
}