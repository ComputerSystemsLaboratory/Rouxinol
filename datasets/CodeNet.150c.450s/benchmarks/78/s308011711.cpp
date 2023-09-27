#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1e6;

int main(){
    vector<int> th(200);
    for(int i=1; i<=200; i++){
        th[i] = i*(i+1)*(i+2)/6;
    }
    vector<int> dp(MAX, MAX), dp2(MAX, MAX);
    dp[0]=0; dp2[0]=0;
    for(int i=0; th[i]<MAX; i++){
        for(int j=0; j+th[i]<MAX; j++){
            if(dp[j]+1 < dp[j+th[i]]){
                dp[j+th[i]] = dp[j]+1;
            }
        }
        if(th[i]%2==0) continue;
        for(int j=0; j+th[i]<MAX; j++){
            if(dp2[j]+1 < dp2[j+th[i]]){
                dp2[j+th[i]] = dp2[j]+1;
            }
        }
    }
    
    while(1){
        int n;
        cin >> n;
        if(n==0) break;
        cout << dp[n] << " " << dp2[n] << endl;
    }
    return 0;
}