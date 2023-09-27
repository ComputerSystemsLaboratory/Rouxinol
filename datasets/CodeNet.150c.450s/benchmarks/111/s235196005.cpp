#include <cstdio>
#include <vector>
using namespace std;

inline bool valid(int x){
	return 0 <= x && x <= 20;
}

int main()
{
	int N;
	scanf("%d\n", &N);

	vector<int> a(N);
	for(int i = 0; i < N; i++)
		scanf("%d", &a[i]);
	int answer = a.back(); a.pop_back();

	vector<vector<long long> > dp(a.size(), vector<long long>(21, 0));

	dp[0][a[0]] = 1;

	
	//左からi番目の穴に+か-を入れてjにするパターンは
	//a[i] + これまで = j or これまで - a[i] = j となる時のどちらか
	//<=> これまで = j - a[i] or これまで = j + a[i]
	//よってこれまでのパターン == dp[i - 1][j - a[i]] + dp[i - 1][j + a[i]]
	

	for(int i = 1; i < dp.size(); i++){
		for(int j = 0; j < 21; j++){
			if(valid(j - a[i]))
				dp[i][j] += dp[i - 1][j - a[i]];
			if(valid(j + a[i]))
				dp[i][j] += dp[i - 1][j + a[i]];
		}
	}

	printf("%lld\n", dp[dp.size() - 1][answer]);
	return 0;
}