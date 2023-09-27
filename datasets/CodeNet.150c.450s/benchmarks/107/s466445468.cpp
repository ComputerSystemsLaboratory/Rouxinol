#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<typename U>
int editDistance(const U& S, const U& T){
    int n = S.size();
    int m = T.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, max(n, m)));
    dp[0][0] = 0;
    for(int i=0;i<=S.size();i++){
        for(int j=0;j<=T.size();j++){
            if(i < S.size()){
                dp[i+1][j] = min(dp[i+1][j], dp[i][j] + 1);
            }
            if(j < T.size()){
                dp[i][j+1] = min(dp[i][j+1], dp[i][j] + 1);
            }
            if(i < S.size() && j < T.size()){
                dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j] + (S[i] == T[j] ? 0 : 1));
            }
        }
    }
    return dp[n][m];
}

int main(){
    string s, t;
    while(cin >> s >> t){
        cout << editDistance(s, t) << endl;
    }
}
