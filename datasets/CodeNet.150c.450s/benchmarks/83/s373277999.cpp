#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, W;

int main (int argc, char* argv[]){
	cin >> N >> W;
    vector<int> v(N);
    vector<int> w(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i] >> w[i];
    }

    // cout << "N: " << N << endl;
    // cout << "W: " << W << endl;
    // cout << "v: " << endl;
    // for(auto e: v){
    //     cout << e << endl;
    // }
    // cout << "w: " << endl;
    // for(auto e: w){
    //     cout << e << endl;
    // }

    vector<vector<int> > dp(N + 1, vector<int>(W + 1, 0));
    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j < W + 1; j++) {
            if (j < w[i]) {
                dp[i][j] = dp[i + 1][j];
            }else {
                dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
            }
        }
    }

    // for (auto e: dp) {
    //     for (auto i: e) {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }


    cout << dp[0][W] << endl;
        
	return 0;
}