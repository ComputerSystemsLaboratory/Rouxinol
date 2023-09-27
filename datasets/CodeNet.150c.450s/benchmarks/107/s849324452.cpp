#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stdint.h>
#include <queue>
#include <bitset>
#include <iomanip>
#include <set>
#include <map>

using namespace std;

#define PI (3.14159265358979323846)
#define INF (2147483647)
#define INF_LL (9223372036854775807)
#define DIV_NUM (1000000007)

// 配列初期化テンプレ
template<typename A, size_t N, typename T>
void Fill(A(&array)[N], const T& val) {
	std::fill((T*)array, (T*)(array + N), val);
}


// 編集距離（レーベンシュタイン距離）
#define MAX_LENGTH_S1 (1000)
#define MAX_LENGTH_S2 (1000)

int edit_dist(const string S1, const string S2) {
	int len1 = S1.size();
	int len2 = S2.size();
	// dp[i][j]:S1[i]までとS2[j]までの最長共通部分列
	vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1));
	dp[0][0] = 0;
	for (int i = 1; i <= len1; i++) dp[i][0] = i;
	for (int i = 1; i <= len2; i++) dp[0][i] = i;
	for (int i = 0; i < len1; i++) {
		for (int j = 0; j < len2; j++) {
			dp[i + 1][j + 1] = min(dp[i][j] + (S1[i] != S2[j]), min(dp[i][j + 1] + 1, dp[i + 1][j] + 1));
		}
	}
	int edit_dist = dp[len1][len2];
	return edit_dist;
}

int main() {

	string S1, S2;
	cin >> S1 >> S2;

	cout << edit_dist(S1,S2) << endl;

	return 0;
}

