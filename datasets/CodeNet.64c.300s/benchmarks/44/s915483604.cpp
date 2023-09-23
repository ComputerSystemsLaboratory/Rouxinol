#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main(){
	int n;


	while (cin >> n && n != 0) {
		int min_ = 1000000000; // 答えの最小値
		int min_num = 1; // 答えの町
		int cost[100][100];
		int max_ = 0; // 町がどれだけあるか
		int from, to, time;

		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				cost[i][j] = 100000000;
			}
		}
		for (int i = 0; i < 100; i++) {
			cost[i][i] = 0;
		}
		for (int i = 0; i < n; i++) {
			cin >> from >> to >> time;
			cost[from][to] = time;
			cost[to][from] = time;
			max_ = max(max(from, to), max_);
		}
		for (int k = 0; k <= max_; k++) {
			for (int i = 0; i <= max_; i++) {
				for (int j = 0; j <= max_; j++) {
					cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
				}
			}
		}
		// 答えを求める
		for (int i = 0; i <= max_; i++) {
			int total = 0;
			for (int j = 0; j <= max_; j++) {
				total += cost[i][j];
			}
			if (total < min_) {
				min_ = total;
				min_num = i;
			}
		}
		cout << min_num << " " << min_ << endl;
  }
	return 0;
}