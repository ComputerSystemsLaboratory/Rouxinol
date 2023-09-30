#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stdint.h>
#include <queue>
#include <bitset>
#include <iomanip>
#include <set>
#include <map>

using namespace std;

#define PI (3.14159265358979323846)
#define INF (2147483647)
#define INF_LL (9223372036854775807)
#define DIV_NUM (1000000007)
typedef long long ll;

// 配列初期化テンプレ
template<typename A, size_t N, typename T>
void Fill(A(&array)[N], const T& val) {
	std::fill((T*)array, (T*)(array + N), val);
}


vector<int> c;
vector<vector<int>> s;
vector<int> last_d(27, 0);

int calc_score(vector<int> &schedule) {
	int score = 0;
	for (int i = 1; i < schedule.size(); i++) {
		score += s[i][schedule[i]];
		last_d[schedule[i]] = i;
		for (int j = 1; j < 27; j++) {
			score -= c[j] * (i - last_d[j]);
		}
		cout << score << endl;
	}
	return score;
}

int cal_totdays_score_change(const int &type, const int &date) {
	int score = 0;
	score += s[date][type];
	for (int j = 1; j < 27; j++) {
		if (j == type) continue;
		score -= c[j] * (date - last_d[j]);
	}
	return score;
}


int main() {

	int D;
	cin >> D;

	c.resize(27);
	for (int i = 0; i < 26; i++) {
		cin >> c[i+1];
	}

	s.resize(D+1);
	for (int i = 0; i < D; i++) {
		s[i + 1].resize(27);
	}

	for (int i = 0; i < D; i++) {
		for (int j = 1; j < 27; j++) {
			cin >> s[i+1][j];
		}
	}

	vector<int> schedule(D+1);
	for (int i = 0; i < D; i++) {
		cin >> schedule[i+1];
	}

	int total_score = 0;
	for (int i = 0; i < D; i++) {
		total_score += cal_totdays_score_change(schedule[i + 1], i + 1);
		last_d[schedule[i + 1]] = i + 1;
		cout << total_score << endl;
	}


	return 0;
}