#include<iostream>
using namespace std;

int main(){
    int dp[31] = {1, 1, 2};
    for(int i = 3; i <= 30; i++)    dp[i] = dp[i-1] + dp[i-2] + dp[i-3];

    while(1){
        int n;
        cin >> n;
        if(n == 0)  break;
        int ans = (((dp[n]+9) / 10) + 364) / 365;
        cout << ans << endl;
    }

    return 0;
}
