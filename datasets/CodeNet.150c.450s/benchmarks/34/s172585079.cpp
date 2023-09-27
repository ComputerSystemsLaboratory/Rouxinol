#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    vector<int> dp(31,0);
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for (int i=3; i<=30; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    for(;;){
        int n;
        cin >> n;
        if(n==0) break;
        int ans = dp[n]/(365*10);
        if(dp[n]%(365*10)>0) ans++;
        cout << ans << endl;
    }
    return 0;
}