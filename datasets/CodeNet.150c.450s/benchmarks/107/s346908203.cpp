#include <bits/stdc++.h>
#define INF 100000000
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	vector<vector<int>> edit(s1.size() + 1, vector<int>(s2.size() + 1, INF));
	edit[0][0] = 0;
	for (int i = 1; i <= s1.size(); i++)
		edit[i][0] = i;
	for (int i = 1; i <= s2.size(); i++)
		edit[0][i] = i;

	for (int i = 0; i < s1.size(); i++) {
		for (int j = 0; j < s2.size(); j++) {
			edit[i + 1][j + 1] = s1[i] == s2[j] ? min(edit[i][j], min(edit[i][j + 1] + 1, edit[i + 1][j] + 1)) : min(edit[i][j] + 1, min(edit[i][j + 1] + 1, edit[i + 1][j] + 1));
		}
	}
	cout << edit[s1.size()][s2.size()] << endl;
	return 0;
}