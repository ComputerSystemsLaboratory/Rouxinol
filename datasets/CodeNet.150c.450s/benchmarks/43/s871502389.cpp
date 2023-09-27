#include <iostream>
#include <vector>

using namespace std;

int main() {
	int a, b, n;
	vector<int*> scores;

	while (cin >> n) {
		if (n == 0)
			break;
		int *score = new int(2);
		score[0] = 0;
		score[1] = 0;
		for (int i = 0; i < n; i++) {
			cin >> a >> b; 
			if (a > b)
				score[0] += a + b;
			if (a < b)
				score[1] += a + b;
			if (a == b) {
				score[0] += a;
				score[1] += b;
			}
		}
		scores.push_back(score);
	}

	for (int i = 0; i < scores.size(); i++) {
		cout << scores[i][0] << " " << scores[i][1] << endl;
	}

	return 0;
}