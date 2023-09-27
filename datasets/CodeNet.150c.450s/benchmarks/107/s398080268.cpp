#include<bits/stdc++.h>
using namespace std;

int main(){

    string s, t;
    cin >> s >> t;
    int S = (int)s.size(), T = (int)t.size();
    vector<vector<int> > dp(S + 1, vector<int> (T + 1, 1000000000));
    
	//test
    //dp初期化
    for(int i = 0; i < S + 1; i++) dp[i][0] = i;
    for(int j = 0; j < T + 1; j++) dp[0][j] = j;    
    for(int i = 1; i < S + 1; i++){
        for(int j = 1; j < T + 1; j++){
            dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);
            dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
            if(s[i - 1] == t[j - 1]) dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
            else dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + 1);
		}
    }

    cout << dp[S][T] << endl;
    return 0;

}

