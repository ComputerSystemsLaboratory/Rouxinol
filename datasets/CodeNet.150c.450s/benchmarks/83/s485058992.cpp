#include<iostream>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> dp(100000);

int main(){

    int N,W;
    int v[2000];
    int w[2000];
    cin >> N >> W;
    for(int i=0;i<N;i++){
	cin >> v[i] >> w[i];
    }
    for(int j=0;j<N;j++){
	for(int i=W;i>=0;i--){
	    if(i-w[j] > -1 ) {
		dp[i] = max(dp[i],dp[i-w[j]] + v[j]);
	    }
	}
    }
    int res = 0;
    for(int i=0;i<=W;i++){
	res = max(res,dp[i]);
    }
    cout << res << endl;
    dp.clear();


    return 0;
}