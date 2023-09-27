
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <utility>
#include <queue>
#define INF 1000000007

using namespace std;
typedef long long int ll;

int main(){
    vector<int> dp(31,0);
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for (int i=3; i<31; i++) {
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }
    for (;;) {
        int n;
        cin >> n;
        if(n==0) break;
        int ans = dp[n]/(10*365)+1;
        cout << ans <<endl;
    }
}