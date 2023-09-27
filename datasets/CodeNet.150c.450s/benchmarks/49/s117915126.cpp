#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int N;

	while(cin >> N, N) {
		vector<int> scores;
		int score;
		for(int i=0; i < N; i++) {
			cin >> score;
			scores.push_back(score);
		}

		sort(scores.begin(), scores.end());
		int sums = 0;
		for(int i=1; i<scores.size()-1; i++) {
			sums+=scores[i];
		}
		int ans = sums/(scores.size()-2);
		cout << ans << endl;
	}

	return EXIT_SUCCESS;
}