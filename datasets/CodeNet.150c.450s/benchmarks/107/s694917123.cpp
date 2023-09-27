#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;
#define MOD 1000000007

template<class T> inline void chmax(T& a, T b) { if (a < b) a = b; }
template<class T> inline void chmin(T& a, T b) { if (a > b) a = b; }

int dp[1002][1002];
int main()
{
	string S1, S2; cin >> S1 >> S2;
	int L1 = S1.size(), L2 = S2.size();

	//memset(dp, 0, sizeof(dp));
	dp[0][0] = 0;
	for (int i = 0; i < 1001; ++i) {
		dp[i + 1][0] = dp[i][0] + 1;
		dp[0][i + 1] = dp[0][i] + 1;
	}

	for (int i1 = 0; i1 <= L1; ++i1) {
		for (int i2 = 0; i2 <= L2; ++i2) {
			if (S1[i1] == S2[i2]) dp[i1 + 1][i2 + 1] = dp[i1][i2];	//等しい
			else dp[i1 + 1][i2 + 1] = dp[i1][i2] + 1;		//置換
			chmin(dp[i1 + 1][i2 + 1], dp[i1 + 1][i2] + 1);	//削除
			chmin(dp[i1 + 1][i2 + 1], dp[i1][i2 + 1] + 1);	//挿入	
		}
	}
	cout << dp[L1][L2] << endl;
	return 0;
}

