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
	for (int i = 0; i <= s1.length(); i++)
		D[i][0] = i;
	for (int i = 0; i <= s2.length(); i++)
		D[0][i] = i;
	for (int i = 1; i <= s1.length(); i++) {
		for (int j = 1; j <= s2.length(); j++) {
				D[i][j] = min(D[i - 1][j - 1] + ((s1.at(i - 1) != s2.at(j - 1)) ? 1 : 0),
					min(D[i - 1][j] + 1, D[i][j - 1] + 1));
		}
	}
	cout << D[s1.length()][s2.length()] << endl;
}