#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	while(cin >> N && N) {
		vector<int> tmp(N);
		int score_max = 0;
		int score_min = 1001;
		int res = 0;
		for(int i = 0; i < N; i++) {
			cin >> tmp[i];
			score_max = max(score_max, tmp[i]);
			score_min = min(score_min, tmp[i]);
			res += tmp[i];
		}
		cout << (res - (score_max+score_min))/(N-2) << endl;
	}

	return 0;
}