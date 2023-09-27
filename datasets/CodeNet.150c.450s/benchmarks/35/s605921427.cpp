#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>
using namespace std;

double before_degree = 0;;

int main(void){

    int n;
    while(cin >> n,n != 0){

        int ans = 0,tmp;
        vector<int> num(5010,0);
        for(int i = 0;i < n;i++){
            cin >> num[i];
        }
        vector<int> dp(5010,0);
        dp[0] = num[0];
        ans = dp[0];
        for(int i = 1;i < n;i++){
            dp[i] = max(num[i],dp[i-1]+num[i]);
            ans = max(ans,dp[i]);
        }


        cout << ans << endl;
    }
    return 0;
}

