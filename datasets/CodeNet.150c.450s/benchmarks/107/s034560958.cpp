#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	int D[1001][1001] = {};
	string s1, s2;
	cin >> s1 >> s2;

	for (int i = 0; i <= s1.length(); i++) {
		for (int j = 0; j <= s2.length(); j++) {
			if (i + j == 0)
				continue;
			else if (i == 0)
				D[i][j] = D[i][j - 1];
			else if (j == 0)
				D[i][j] = D[i - 1][j];
			else
				D[i][j] = min(D[i - 1][j - 1] + ((s1.at(i - 1) != s2.at(j - 1)) ? 1 : 0), min(D[i - 1][j] + 1, D[i][j - 1] + 1));

			if(i == 0 || j == 0) D[i][j]++;
		}
	}
	cout << D[s1.length()][s2.length()] << endl;
}