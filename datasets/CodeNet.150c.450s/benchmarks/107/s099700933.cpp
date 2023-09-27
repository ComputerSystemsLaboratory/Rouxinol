#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int dp[1001][1001]; // minimum edit distance
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    // init. dp table
    for(int i=0; i<=s1.length(); i++){
        dp[i][0] = i;
    }
    for(int j=0; j<=s2.length(); j++){
        dp[0][j] = j;
    }

    for(int i=1; i<=s1.length(); i++){
        for(int j=1; j<=s2.length(); j++){
            int RepCost = s1[i-1] == s2[j-1] ? 0:1;
            dp[i][j] = min(min(dp[i][j-1] + 1,  // insertion
                           dp[i-1][j] + 1),  // deletion
                           dp[i-1][j-1] + RepCost  // replacement
                           );
        }
    }

/*
    for(int i=0; i<=s1.length(); i++){
        for(int j=0; j<=s2.length(); j++){
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
*/
    cout << dp[s1.length()][s2.length()] << "\n";

    return 0;

}