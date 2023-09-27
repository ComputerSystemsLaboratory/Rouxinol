#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	while (true) {
		int N, M;
		cin >> N >> M;

		if (N == 0 && M == 0) {
			break;
		}

		vector<pair<int, int>> pairs(N);
		long long int sum = 0;

		for (int i = 0; i < N; i++) {
			cin >> pairs[i].second >> pairs[i].first;
			sum += pairs[i].first*pairs[i].second;
		}

		sort(pairs.rbegin(), pairs.rend());

		int cur = 0;
		
		while (true) {
			if (M >= pairs[cur].second) {
				sum -= pairs[cur].first*pairs[cur].second;
				M -= pairs[cur].second;
				cur++;
			}
			else {
				sum -= M*pairs[cur].first;
				M = 0;
			}

			if (cur == N || M == 0) {
				break;
			}
		}

		cout << sum << endl;
	}

	return 0;
}