#include <bits/stdc++.h>

using namespace std;

int main() {

	while(1){
	int h;
	cin >> h;
	if (h == 0) { break; }
	vector<deque<int>> p(5, deque<int>());
	int score = 0;

	for (int i = 0; i < h; i++) {
		int in1;
		for (int j = 0; j < 5; j++) {
			cin >> in1;
			p[j].push_front(in1);
		}
	}

	while (1) {
		bool chgflg = false;

		for (int i = 0; i < h; i++) {

			int ernum, ernumcount;
			map<int, int> counter;

			//横に並んだ数字カウント
			for (int j = 0; j < 5; j++) {
				counter[p[j].at(i)]++;
			}
			//3つ以上を記憶する
			ernum = -1;
			for (int j = 1; j <= 9; j++) {
				if (counter[j] >= 3) {
					ernum = j;
					ernumcount = counter[j];
					break;
				}
			}
			if (ernum == -1) { continue; }

			//繋がってるか判定&ポイント追加
			if (ernumcount == 3) {
				for (int j = 0; j < 3; j++) {
					if (p[j].at(i) == ernum
						&& p[j + 1].at(i) == ernum
						&& p[j + 2].at(i) == ernum) {
						score += ernum * 3;
						p[j].at(i) = -1;
						p[j + 1].at(i) = -1;
						p[j + 2].at(i) = -1;
						chgflg = true;
						break;
					}
				}

			}
			else if (ernumcount == 4) {
				int chigauposi = -1;
				for (int j = 0; j < 5; j++) {
					if (p[j].at(i) != ernum) {
						chigauposi = j;
					}
				}

				if (chigauposi == 0) {
					chgflg = true;
					score += ernum * 4;
					p[1].at(i) = -1;
					p[2].at(i) = -1;
					p[3].at(i) = -1;
					p[4].at(i) = -1;
				}
				else if (chigauposi == 4) {
					chgflg = true;
					score += ernum * 4;
					p[0].at(i) = -1;
					p[1].at(i) = -1;
					p[2].at(i) = -1;
					p[3].at(i) = -1;
				}
				else if (chigauposi == 1) {
					chgflg = true;
					score += ernum * 3;
					p[2].at(i) = -1;
					p[3].at(i) = -1;
					p[4].at(i) = -1;
				}
				else if (chigauposi == 3) {
					chgflg = true;
					score += ernum * 3;
					p[0].at(i) = -1;
					p[1].at(i) = -1;
					p[2].at(i) = -1;
				}

			}
			else if (ernumcount == 5) {
				chgflg = true;
				score += ernum * 5;
				p[0].at(i) = -1;
				p[1].at(i) = -1;
				p[2].at(i) = -1;
				p[3].at(i) = -1;
				p[4].at(i) = -1;
			}

		}

		if (chgflg == false) { break; }

		//消去
		for (int i = h - 1; i >= 0; i--) {
			for (int j = 0; j < 5; j++) {
				if (p[j].at(i) == -1) {
					p[j].erase(p[j].begin() + i);
					p[j].push_back(0);
				}
			}
		}
	}

	cout << score << endl;
}
	return 0;

}
