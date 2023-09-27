#include <iostream>
#include <string>
using namespace std;

const int MAX_LENGTH = 1005;
const int INF = 1001001001;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int dp[MAX_LENGTH][MAX_LENGTH];
    for(int i=0;i<s1.size() + 1;++i)
        for(int j=0;j<s2.size() + 1;++j)
            dp[i][j] = INF;
    dp[0][0] = 0;
    for(int i=0; i<s1.size() + 1; ++i)
    {
        for(int j=0; j<s2.size() + 1; ++j)
        {
            dp[i + 1][j + 1] = min(dp[i+1][j+1], dp[i][j] + int(s1[i] != s2[j]));
            dp[i + 1][j] = min(dp[i+1][j], dp[i][j] + 1);
            dp[i][j + 1] = min(dp[i][j+1], dp[i][j] + 1);
        }
    }
    /*
    for(int i=0;i<s1.size() + 1;++i){
        for(int j=0;j<s2.size() + 1;++j){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    */

    cout << dp[s1.size()][s2.size()] << endl;

}

