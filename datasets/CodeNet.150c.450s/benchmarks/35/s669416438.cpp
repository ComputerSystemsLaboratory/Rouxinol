#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while(cin >> n && n){
        vector<int> a(n,0);
        for(int i=0; i<n; ++i){
            cin >> a[i];
        }
        // ????????£?¶??????????????????§??£?¶???????dp??¨?????????
        vector<int> dp(n,0);
        dp[0] = a[0];
        int max = dp[0];
        for(int i=1; i<n; ++i){
            if(dp[i-1]>0){
                dp[i] = dp[i-1] + a[i];
            } else {
                dp[i] = a[i];
            }
            if(max<dp[i]){
                max = dp[i];
            }
        }
        cout << max << endl;
    }
}