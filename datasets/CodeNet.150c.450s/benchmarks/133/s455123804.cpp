#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include <queue>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main()
{
	int d;
	cin >> d;
	vector<int> c(26);
	vector<int> last(26, -1);
	vector<vector<int>> s(26, vector<int>(d, 0));
	rep(i, 26)	cin >> c[i];
	rep(j, d) rep(i, 26)	cin >> s[i][j];

	int t = 0;
	vector<ll> score(d, 0);
	rep(i, d) {
		if (i != 0)	score[i] = score[i - 1];
		cin >> t;
		t--;
		score[i] += s[t][i];
		last[t] = i;
		rep(j, 26) {
			score[i] -= (i - last[j])*c[j];
		}
	}
	rep(i, d)	cout << score[i] << endl;

	return 0;
}
