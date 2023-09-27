#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#define INF 999999999

using namespace std;

string s1, s2;
int d[1050][1050];

int tmin(int a, int b, int c)
{
	int d = min(a, b);
	int res = min(d, c);
	return res;
}

int main()
{
	cin >> s1;
	cin >> s2;

	int n = s1.length();
	int m = s2.length();

	for (int i = 0; i <= n; i++) {
		d[i][0] = i;
	}
	for (int i = 0; i <= m; i++) {
		d[0][i] = i;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (s1[i-1] == s2[j-1])d[i][j] = tmin(d[i][j - 1] + 1, d[i - 1][j] + 1, d[i - 1][j - 1]);
			else d[i][j] = tmin(d[i][j - 1] + 1, d[i - 1][j] + 1, d[i - 1][j - 1] + 1);
		}
	}

	/*
	for (int i = 0; i <= n; i++) {
	for (int j = 0; j <= m; j++) {
	cout << d[i][j] << " ";
	}
	cout << endl;
	}
	*/

	cout << d[n][m] << endl;

	return 0;
}