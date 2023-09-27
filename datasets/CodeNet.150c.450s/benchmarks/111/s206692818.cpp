#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;
typedef unsigned long long ull;

ull dp[21][100] = { { 0 } };
int question[100] = { 0 };

int main(){
	int N;
	cin >> N;
	for(int i = 0; i < N; ++i){ cin >> question[i]; }
	--N;
	dp[question[0]][0] = 1;
	for(int i = 1; i < N; ++i){
		for(int j = 0; j <= 20; ++j){
			int tmp = j + question[i];
			if(0 <= tmp && tmp <= 20){ dp[tmp][i] += dp[j][i - 1]; }
			tmp = j - question[i];
			if(0 <= tmp && tmp <= 20){ dp[tmp][i] += dp[j][i - 1]; }
		}
	}
	cout << dp[question[N]][N - 1] << endl;
	return 0;
}