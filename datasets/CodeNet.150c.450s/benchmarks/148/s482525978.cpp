#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
	int N;
	cin >> N;
	string str[4] = {"AC", "WA", "TLE", "RE"};
	int cnt[4] = {0};

	for (int i = 0; i < N; ++i) {
		string S;
		cin >> S;
		for (int i = 0; i < 4; ++i) {
			if (S == str[i]) {
				cnt[i]++;
				break;
			}
		}
	}

	for (int i = 0; i < 4; ++i) {
		cout << str[i] << " x " << cnt[i] << endl;
	}
	return 0;
}
