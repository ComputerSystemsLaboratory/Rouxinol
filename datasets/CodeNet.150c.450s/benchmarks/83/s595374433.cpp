#include<iostream>
#include<algorithm>
#include<utility>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define P pair<int, int>

using namespace std;

int dp[100][10001] = {};
int w[100];
int v[100];


int main(){
	int N, W;
	cin >> N >> W;
	rep(i, N){
		cin >> v[i] >> w[i];
	}

	rep(j, W+1){
		if (w[0] <= j){
			dp[0][j] = v[0];
		}
	}

	for (int i = 1; i < N; i++){
		for (int j = 0; j <= W; j++){
			if (w[i]>j){
				dp[i][j] = dp[i - 1][j];
			}
			else{
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			}
		}
	}
	cout << dp[N - 1][W] << endl;

}