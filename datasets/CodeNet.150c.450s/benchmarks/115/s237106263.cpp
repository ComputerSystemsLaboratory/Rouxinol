#include <iostream>

using namespace std;
const int MAX = 1001;

short max(short a,short b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}
short solve(string str1,string str2) {
	int len1 = str1.length();
	int len2 = str2.length();
	str1 = " " + str1;
	str2 = " " + str2;
	short LCS[MAX][MAX];
	for (int i=0;i<=len1;i++) {
		LCS[i][0] = 0;
	}
	for (int i=0;i<=len2;i++) {
		LCS[0][i] = 0;
	}
	int max1 = 0;

	for (int i=1;i<=len1;i++) {
		for (int j = 1;j<=len2;j++) {
			if (str1[i] == str2[j]) {
				LCS[i][j] = LCS[i-1][j-1] + 1;
			} else {
				LCS[i][j] = max(LCS[i-1][j],LCS[i][j-1]);
			}
			max1 = max(LCS[i][j],max1);
		}
	}
	return max1;
}

int main() {
	int n;
	cin >> n;
	for (int i=0;i<n;i++) {
		string str1,str2;
		cin >> str1 >> str2;
		cout << solve(str1,str2) << endl;
	}
	return 0;

}
