#include <iostream>
using namespace std;

int main() {

	int jn; //?????????????????°
	int *p;
	int score;

	while (true) {

		cin >> jn;

		if (jn == 0)
			break;

		score = 0;

		p = new int[jn];

		for (int i = 0; i < jn; i++)
			cin >> p[i];


		for (int i = 0; i < jn; i++) {

			for (int j = 0; j < jn - 1; j++) {

				if (p[j] < p[j + 1]) {
					int tmp;
					tmp = p[j];
					p[j] = p[j + 1];
					p[j + 1] = tmp;
				}

			}

		}

		for (int i = 1; i < jn - 1; i++)
			score += p[i];

		score = score / (jn - 2);

		cout << score << endl;

		delete[] p;

	}


	return 0;

}