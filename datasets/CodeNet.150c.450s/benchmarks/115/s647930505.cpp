#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
const int num = 1001;
int lg[num + 1][num + 1];
int main() {
	int w;
	string s, t;
	cin >> w;
	for (int i = 0; i < w; i++) {
		cin >> s;
		cin >> t;
		int n = s.size();
		int m = t.size();
		for (int i = 0; i < n; i++) lg[i][0] = 0;
		for (int i = 0; i < m; i++) lg[0][i] = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++) {
				if (s[i] == t[j]) lg[i + 1][j + 1] = lg[i][j] + 1;
				else lg[i + 1][j + 1] = max(lg[i][j + 1], lg[i + 1][j]);
			}
		cout << lg[n][m] << endl;
	}
	return 0;
	/*int n, m;
	char s[num], t[num];
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> s[i];
	for (int i = 0; i < m; i++) cin >> t[i];
	for (int i = 0; i < n; i++) lg[i][0] = 0;
	for (int i = 0; i < m; i++) lg[0][i] = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			if (s[i] == t[j]) lg[i + 1][j + 1] = lg[i][j] + 1;
			else lg[i + 1][j + 1] = max(lg[i][j + 1], lg[i + 1][j]);
		}
	cout << lg[n][m] << endl;
	return 0;*/
}