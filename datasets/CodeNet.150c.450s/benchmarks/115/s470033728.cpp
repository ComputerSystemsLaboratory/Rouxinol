#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <random>
#include <map>

using namespace std;

int LCS[1010][1010] = {};

int LCSLength(string strX,string strY) {

    int strXSize = strX.length();
    int strYSize = strY.length();
    for (int i = 0; i < strXSize + 1; i++) {
	for (int j = 0; j < strYSize + 1; j++) {
	    if (i == 0 || j == 0) {
		LCS[i][j] = 0;
	    }
	}
    }

    for (int i = 1; i < strXSize + 1; i++) {
	for (int j = 1; j < strYSize + 1; j++) {

	    //LCS[i]==LCS[j]
	    if (strX[i - 1] == strY[j - 1]) {
		LCS[i][j] = LCS[i - 1][j - 1] + 1;
	    }
	    else {
		LCS[i][j] = max(LCS[i][j - 1], LCS[i - 1][j]);
	    }
	}
    }

    return LCS[strXSize][strYSize];
}

int main() {

    //cin.tie(0);
    //ios::sync_with_stdio(false);

    int q; scanf("%d", &q);

    string strX;
    string strY;
    while (q-- > 0) {
	cin >> strX;
	cin >> strY;
	printf("%d\n", LCSLength(strX, strY));
    }



    return 0;

}


