#include <bits/stdc++.h>
#include <random>

using namespace std;

int main() {

	int D;
	cin >> D;

	vector<int> c(27);
	for (int i = 1; i <= 26; i++) {
		cin >> c[i];
	}

	vector<vector<int>> sd(D + 1, vector<int>(27));

	for (int i = 1; i <= D; i++) {
		for (int j = 1; j <= 26; j++) {
			cin >> sd[i][j];
		}
	}

	vector<int> cont(D + 1);
	for (int i = 1; i <= D; i++) {
		cin >> cont[i];
	}

	mt19937 mt{ std::random_device{}() };

	uniform_int_distribution<int> dist(1, 26);


	int resmax = 0;
	vector<int> maxcont(D + 1);
	vector<int> tmpres(D+1);

	for (int k = 0; k < 1; k++) {

		//vector<int> cont(D + 1);
		vector<int> lastcont(27);
		int tmpress = 0;

		for (int i = 1; i <= D; i++) {

			//cont[i] = dist(mt);

			lastcont[cont[i]] = i;
			tmpress += sd[i][cont[i]];

			for (int j = 1; j <= 26; j++) {
				tmpress -= c[j] * (i - lastcont[j]);
			}
			tmpres[i] = tmpress;
		}

		if (resmax < tmpress) {
			resmax = tmpress;
			maxcont = cont;
		}
	}

	for (int i = 1; i <= D; i++) {
		cout << tmpres[i] << endl;
	}

	return 0;
	
}