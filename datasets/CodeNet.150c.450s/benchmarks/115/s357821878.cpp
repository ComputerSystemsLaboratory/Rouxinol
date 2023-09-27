#include "iostream"
#include "string.h"

using namespace std;

int L[1001][1001];

int lcs( char s1[], char s2[], int l1, int l2 ) {

	if (L[l1][l2] != 0)return L[l1][l2];

	if (l1 == 0 || l2 == 0) return 0;
	else if (s1[l1-1] == s2[l2-1]) L[l1][l2] = lcs(s1, s2, l1 - 1, l2 - 1) + 1;
	else {
		int lsc1 = lcs(s1, s2, l1 - 1, l2);
		int lsc2 = lcs(s1, s2, l1, l2 - 1);

		if (lsc1 > lsc2) L[l1][l2] = lsc1;
		else L[l1][l2] = lsc2;
	}

	return L[l1][l2];
}

int main() {

	int n;
	char s1[1000], s2[1000];

	cin >> n;

	int ans[150];

	for (int i = 0; i < n; i++) {
		cin >> s1;
		cin >> s2;

		int l1 = strlen(s1), l2 = strlen(s2);

		ans[i] = lcs(s1, s2, l1, l2);

		for (int j = 0; j <= l1; j++) {
			for (int k = 0; k <= l2; k++) {
				L[j][k] = 0;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << ans[i] << endl;
	}

	return 0;
}