#include <iostream>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <deque>
#include <utility>
#include <cctype>

using namespace std;

using ll = long long;
using P = pair<double, double>;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define mkp(a, b) make_pair(a, b)

unsigned rando() {
	static unsigned y = 2463534242;
    y ^= y << 13;y ^= y >> 17;y ^= y << 5;
    return y;
}

int d;

int c[26];
int s[365][26];

int score(vector<int>& t) {
	int score = 0;
	vector<int> last(26,0);
	rep(i, d) {
		score += s[i][t[i]];
		last[t[i]] = (i + 1);

		rep(j,26) {
			score -= ((i + 1) - last[j]) * c[j];
		}
		cout  << score << endl;

	} 


	return score;

}


int main() {
	cin >> d;
	rep(i, 26) {
		cin >> c[i];
	} 
	rep(i, d) {
		rep(j,26) {
			cin >> s[i][j];
		}
	}
	vector<int> t(d);

	rep(i, d) {
		//t[i] = rando() % 26 + 1;
		cin >> t[i];
		t[i]--; 
	}
	score(t);

	//cout << "score:" <<  << endl;

	return 0;
}
