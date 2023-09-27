#include<iostream>
#include<numeric>

using namespace std;


int main() {
	// 各月の日数を定数として定義しておく
	// 最初に0があるのは
	// 1.配列のインデックスと月が異なるとややこしくなる
	// 2.1月の場合に例外的な処理をしなくていいようにするため
	const int offset_days[]{
		0,31,29,31,30,31,30,31,31,30,31,30,31
	};
	const char* day_str[]{
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday"
	};
	// 処理を簡単にするため、前年の大晦日を起点に考える
	const int day_12_31 = 2;

	int m, d;
	while (cin >> m >> d, m != 0) {
		// 各月の日数の和を求める。
		// オフセットとして前年の大晦日に対応する値を設定する。
		int sum = std::accumulate(&offset_days[0], &offset_days[m], day_12_31);
		// 該当する日の曜日を求めるため、日数を加算して7で割ったあまりを求める。
		int day = (sum + d) % 7;
		cout << day_str[day] << endl;
	}

	return 0;
}