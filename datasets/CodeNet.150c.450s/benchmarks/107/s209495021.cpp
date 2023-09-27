#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    //編集距離
    int l,r;
    l = s1.length()+1;
    r = s2.length()+1;
    vector<vector<int> > dp(l);

    
    for(int i = 0 ; i < l ; i++){
        dp[i].resize(r);
        for(int j = 0; j < r ; j++){
            if(i == 0)dp[i][j] = j;
            else if(j == 0)dp[i][j] = i;
            else{
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = min({dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]});
                }else{
                    dp[i][j] = min({dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+1});
                }
            }

        }
    }
    cout << dp[l-1][r-1] << endl;
    return 0;
}
