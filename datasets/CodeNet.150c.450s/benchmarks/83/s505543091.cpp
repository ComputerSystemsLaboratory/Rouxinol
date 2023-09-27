#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int n, w;

int flag[101][10001];
vector<pair<int, int>> v;

int dp(int cnt, int left){
	if (flag[cnt][left] >= 0) {
		return flag[cnt][left];
	}
	int ret;
	if (cnt == n) {
		ret = 0;
	} else if (left < v[cnt].second) {
		ret = dp(cnt + 1, left);
	} else {
		ret = max(
			dp(cnt + 1, left),
			dp(cnt + 1, left - v[cnt].second) + v[cnt].first
			);;
	}
	flag[cnt][left] = ret;
	return ret;
}

int main(){

	cin >> n >> w;
	for (int i = 0; i < n; i++) {
		int v_, w_;
		cin >> v_ >> w_;
		v.push_back(make_pair(v_, w_));
	}

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 10001; j++) {
			flag[i][j] = -1;
		}
	} 

	cout << dp(0, w) << endl;

	return 0;
}