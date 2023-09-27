#include<bits/stdc++.h>
using namespace std;

using i64 = long long int;

const int INF = 1e9;

int edit_distance(string s1, string s2) {
    vector<vector<int>> dp(s1.size()+1, vector<int>(s2.size()+1, INF));

    for(int i=0;i<=s1.size();++i)dp[i][0] = i;
    for(int j=0;j<=s2.size();++j)dp[0][j] = j;

    for(int i=1;i<=s1.size();++i){
        for(int j=1;j<=s2.size();++j){
            dp[i][j] = min({
                dp[i-1][j] + 1,
                dp[i][j-1] + 1,
                dp[i-1][j-1] + !!(s1[i-1] != s2[j-1])
            });
        }
    }

    return dp[s1.size()][s2.size()];
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    cout << edit_distance(s1, s2) << endl;

    return 0;
}

