#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>
#include <fstream>
#include <array>
#include <utility>
#include <functional>

using namespace std;
typedef long long Int;
#define REP(i , x) for(int i = 0 ; i < x ; ++i)

typedef pair<int, int> P;

bool dp[10000100];

int main()
{
	int N;
	while (cin >> N){
		long ans(0);
		dp[0] = dp[1] = true;
		for (int i = 2; i*i <= N; ++i){
			if (!dp[i]){
				for (int j = 2*i; j <= N; j += i)
					dp[j] = true;
			}
		}
		for (int i = 2; i <= N; ++i){
			ans += !dp[i];
		}
		cout << ans << endl;
	}
}