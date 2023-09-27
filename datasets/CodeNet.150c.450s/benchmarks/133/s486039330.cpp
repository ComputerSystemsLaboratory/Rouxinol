#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <cassert>
#include <cstdint>

using namespace std;

using VI = vector<int>;
using VVI = vector<VI>;
using VL = vector<long long>;
using VVL = vector<VL>;

const long long INF = 1e18;
const int N_CONTEST = 26;

// すべて 0-indexで考える。結果の出力時に1を足す

struct Input {
	int D;
	VI c;
	VVI s;
};

Input get_input() {
	int D;
	cin >> D;
	VI c(N_CONTEST);
	VVI s(D, VI(N_CONTEST));

	for (int i = 0; i < c.size(); i++) {
		cin >> c[i];
	}
	for (int i = 0; i < D; i++) {
		for (int j = 0; j < s[i].size(); j++) {
			cin >> s[i][j];
		}
	}

	Input input;
	input.D = D;
	input.c = c;
	input.s = s;

	return input;
}

void show_results(const VI &t) {
	for (auto x: t) {
		cout << x + 1 << endl;
	}
}

long long calc_score(const Input& input, const VI& t) {
	long long score = 0;
	VI lastdays(N_CONTEST, -1);
	for (int i = 0; i < t.size(); i++) {
		score += input.s[i][t[i]];

		lastdays[t[i]] = i;
		for (int j = 0; j < N_CONTEST; j++) {
			score -= (long long) input.c[j] * (i - lastdays[j]);
		}
	}

	return score;
}

void solve_b() {
	auto input = get_input();
	int tmp;
	VI t;
	VL scores(input.D);
	for (int i = 0; i < input.D; i++) {
		cin >> tmp;
		// 0-index
		t.emplace_back(tmp - 1);
		scores[i] = calc_score(input, t);
	}

	for (auto x: scores) {
		cout << x << endl;
	}
}


int main() {
	solve_b();
	return 0;
}