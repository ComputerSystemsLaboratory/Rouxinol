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


int D;
vector<int> c;
vector<vector<int>> s;
vector<int> schedule;
vector<int> last_d(27, 0);
vector<int> type_date[27];

int cal_totdays_score_change(const int &type, const int &date) {
	int score = 0;
	score += s[date][type];
	for (size_t j = 1; j < 27; j++) {
		if (j == type) continue;
		score -= c[j] * (date - last_d[j]);
	}
	return score;
}

int cal_chanage_score(const int& date, const int& type) {
	int score_change = 0;
	int old_type = schedule[date];

	int old_type_date_index = lower_bound(type_date[old_type].begin(), type_date[old_type].end(), date) - type_date[old_type].begin();

	// 旧タイプが指定日の何日前に開催されたか
	int old_type_front_span = type_date[old_type][old_type_date_index] - type_date[old_type][old_type_date_index - 1];

	// 旧タイプが指定日の何日後に開催されたか
	int old_type_after_span = type_date[old_type][old_type_date_index+1] - type_date[old_type][old_type_date_index];

	// 旧タイプを削除することで、SUM(経過日)がどれだけ変化するか
	int change_sum_date_old = -(old_type_front_span - 1) * old_type_front_span / 2
		- (old_type_after_span - 1) * old_type_after_span / 2
		+ (old_type_front_span + old_type_after_span - 1) * (old_type_front_span + old_type_after_span) / 2;


	int new_type_after_index = lower_bound(type_date[type].begin(), type_date[type].end(), date) - type_date[type].begin();

	// 新タイプが指定日の後の開催日
	int new_type_after_date = type_date[type][new_type_after_index];

	// 新タイプが指定日の前の開催日
	int new_type_before_date = type_date[type][new_type_after_index-1];

	// 新タイプのもともとの開催間隔
	int new_type_old_interval = new_type_after_date - new_type_before_date;

	// 新タイプの変化後の開催間隔（前側
	int new_type_old_interval_front = date - new_type_before_date;

	// 新タイプの変化後の開催間隔（後側
	int new_type_old_interval_after = new_type_after_date - date;

	// 新タイプを追加することで、SUM(経過日)がどれだけ変化するか
	int change_sum_date_new = -new_type_old_interval * (new_type_old_interval - 1) / 2
		+ new_type_old_interval_front * (new_type_old_interval_front - 1) / 2
		+ new_type_old_interval_after * (new_type_old_interval_after - 1) / 2;

	score_change -= s[date][old_type];
	score_change += s[date][type];
	score_change += c[old_type] * change_sum_date_old;
	score_change += c[type] * change_sum_date_new;

	schedule[date] = type;
	type_date[old_type].erase(lower_bound(type_date[old_type].begin(), type_date[old_type].end(), date));
	type_date[type].push_back(date);
	sort(type_date[old_type].begin(), type_date[old_type].end());
	sort(type_date[type].begin(), type_date[type].end());

	return score_change;
}

int main() {

	cin >> D;

	c.resize(27);
	for (size_t i = 0; i < 26; i++) {
		cin >> c[i+1];
		type_date[i + 1].push_back(0);
	}

	s.resize(D+1);
	for (size_t i = 0; i < D; i++) {
		s[i + 1].resize(27);
	}

	for (size_t i = 0; i < D; i++) {
		for (size_t j = 1; j < 27; j++) {
			cin >> s[i+1][j];
		}
	}

	schedule.resize(D+1);
	for (int i = 0; i < D; i++) {
		int tmp;
		cin >> tmp;
		schedule[i+1] = tmp;
		type_date[tmp].push_back(i + 1);
	}
	for (size_t i = 0; i < 26; i++) {
		type_date[i + 1].push_back(D + 1);
	}

	int total_score = 0;
	for (size_t i = 0; i < D; i++) {
#if 0
		int max_score = 0;
		int max_type = 0;
		for (size_t j = 1; j < 27; j++) {
			int tmp = cal_totdays_score_change(j, i + 1);
			if (tmp > max_score) max_type = j;
		}
		schedule[i+1] = max_type;
		last_d[max_type] = i + 1;
#else
		total_score += cal_totdays_score_change(schedule[i + 1], i + 1);
		last_d[schedule[i + 1]] = i + 1;
		cout << total_score << endl;
#endif
	}
/*
	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int d, q;
		cin >> d >> q;
		int change = cal_chanage_score(d, q);
		total_score += change;
		cout << total_score << endl;
	}

*/

//	for (size_t i = 1; i < schedule.size(); i++) {
//		cout << schedule[i] << endl;
//	}


	return 0;
}
