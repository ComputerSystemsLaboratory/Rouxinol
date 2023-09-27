#include <bits/stdc++.h>

using namespace std;
int main(int argc, const char * argv[]) {
    int q, i, m, n, sl1, sl2;
    cin >> q;
    vector<string> strlist;
    string str, str1, str2;
    for(i = 0;i < q;i++){
        cin >> str;
        strlist.push_back(str);
        cin >> str;
        strlist.push_back(str);
    }
    
    //start
    for(i = 0;i < q*2;i += 2){
        str1 = strlist[i];
        sl1 = str1.length();
        str2 = strlist[i+1];
        sl2 = str2.length();
        int dp[sl1+1][sl2+1];
        for(m = 0;m <= sl2;m++){
            dp[0][m] = 0;
        }
        for(m = 0;m <= sl1;m++){
            dp[m][0] = 0;
        }
        for(m = 1;m <= sl1;m++){
            for(n = 1;n <= sl2;n++){
                dp[m][n] = 0;
            }
        }
        for(m = 1;m <= sl1;m++){
            for(n = 1;n <= sl2;n++){
                if(str1[m-1] == str2[n-1]){
                    dp[m][n] = dp[m-1][n-1] + 1;
                }else{
                    dp[m][n] = max(dp[m-1][n], dp[m][n-1]);
                }
            }
        }
        m = sl1;
        n = sl2;
        printf("%d\n", dp[m][n]);
        
    }
    return 0;
}
