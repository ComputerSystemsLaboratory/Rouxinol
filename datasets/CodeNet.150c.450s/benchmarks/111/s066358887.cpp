#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
typedef long long ll;
using namespace std;

int N;
int num[101];
ll dp[101][21];
ll solve(int ,int);
int main(void){
	cin >> N;
	fill_n(*dp, 101*21, -1);
	for(int i = 0; i < N; i++){
		cin >> num[i];
	}
	cout << solve(1,num[0]) << endl;

}

ll solve(int now, int sum){
	if(sum < 0 || sum > 20){return 0;}
	if(dp[now][sum] != -1){return dp[now][sum];}
	if(now == N-1){
		if(sum == num[N-1]){return 1;}
		else return 0;
	}
	return dp[now][sum] = solve(now+1, sum+num[now])+solve(now+1, sum-num[now]);

}