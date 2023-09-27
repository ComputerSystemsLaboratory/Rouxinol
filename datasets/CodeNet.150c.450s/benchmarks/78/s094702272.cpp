#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define MAX 999999

/*void pollock(int po[], int od[]) {
	int i = 1, j = 1;
	while (po[i - 1] < 1000000) {
		po[i] = (i * (i + 1) * (i + 2)) / 6;
		if (po[i] % 2 == 1) {
			od[j] = po[i];
			j++;
		}
		i++;
	}
}*/

int main() {
	vector<int> tmp(1000000, MAX);
	vector<int> odtmp(1000000, MAX);
	tmp[0] = 0, odtmp[0] = 0;
	int t = 1, i = 1;
	while (t <= MAX) {
			for (int j = 0; j + t <= MAX; ++j) {
				tmp[j + t] = min(tmp[j + t], tmp[j] + 1);
				if (t % 2 == 1) odtmp[j + t] = min(odtmp[j + t], odtmp[j] + 1);
			}
			i++;
			t = (i * (i + 1) * (i + 2)) / 6;
		}
	int n;
	while (cin >> n && n) {
		cout << tmp[n] << " " << odtmp[n] << endl;
	}

	return 0;
}
