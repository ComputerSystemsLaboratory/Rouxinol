#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>

using namespace std;

#define MAX_LEN 1000

int LevenshteinDistance(string str1, string str2) {
	int dp[MAX_LEN+1][MAX_LEN+1];
	int i1, i2, cost = 0;
	for (int i = 0; i <= str1.length(); i++)
		dp[i][0] = i;
	for (int i = 0; i <= str2.length(); i++)
		dp[0][i] = i;

	for (i1 = 1; i1 <= str1.length(); i1++) {
		for (i2 = 1; i2 <= str2.length(); i2++) {
			cost = (str1[i1] == str2[i2]) ? 0 : 1;
			dp[i1][i2] = min(dp[i1-1][i2] + 1,			// insert
							 min(dp[i1][i2 - 1] + 1,	// delete
							 	 dp[i1-1][i2-1] + cost)	// replace
							);
		}
	}
	return dp[str1.length()][str2.length()];
}

int minimum(int a, int b, int c)
{
	return a > b ? (b > c ? c : b) : (a > c ? c : a);
}

int LevenshteinDistance2(string str1, string str2) {
	int lenstr1 = str1.length();
	int lenstr2 = str2.length();
	int d[lenstr1+1][lenstr2+1];
	int i1 = 0, i2 = 0, cost = 0;

	for (;i1 <= lenstr1; i1++) d[i1][0] = i1;
	for (;i2 <= lenstr2; i2++) d[0][i2] = i2;

	for (i1 = 1; i1 <= lenstr1; i1++) {
		for (i2 = 1; i2 <= lenstr2; i2++) {
			cost = str1[i1 - 1] == str2[i2 - 1] ? 0 : 1;
			d[i1][i2] = minimum(d[i1 - 1][i2] + 1, d[i1][i2 - 1] + 1, d[i1 - 1][i2 - 1] + cost);
		}
	}

	return d[lenstr1][lenstr2];
}

int main() {
	string str1, str2;
	cin >> str1 >> str2;

	cout << LevenshteinDistance2(str1, str2) << endl;

	return 0;
}