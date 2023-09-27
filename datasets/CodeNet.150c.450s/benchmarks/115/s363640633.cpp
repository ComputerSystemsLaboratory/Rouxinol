#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
//#include "MyMath.h"
//#include "DataStructure.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
#include <stdio.h>
using namespace std;
typedef pair<int, int> p;
const int INF = 1000000000;
int main(){
	int n; cin >> n;
	for (int k = 0; k < n; k++) {
		char s[1000], t[1000];
		scanf("%s",&s); scanf("%s", &t);
		int i = 0, j = 0;
		int dp[1001][1001];
		fill(dp[0], dp[1001], 0);
		int res = 0;
		while (s[i] != '\0'){
			while (t[j] != '\0') 
			{
				if (s[i] == t[j])dp[i + 1][j + 1] = dp[i][j] + 1;
				else dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
				res = dp[i + 1][j + 1];
				//cout << "i " << i << "j " << j << endl;
				//cout << "dp" << dp[i + 1][j + 1] << endl;
				j++;
			}
			i++;
			j = 0;
		}

		cout << res << endl;
	}
	return 0;
}