#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int score[2] = {0};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			int tmp;
			cin >> tmp;
			score[i] += tmp;
		}
	}
	cout << max(score[0], score[1]) << endl;

	return 0;
}