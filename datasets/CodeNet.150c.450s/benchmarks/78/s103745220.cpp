#include <bits/stdc++.h>
using namespace std;

const int max_n = static_cast<int>(1e6);
int dp[max_n],odp[max_n];
vector<int> odd,all;

int main() {

    for(int i=1; i*(i+1)*(i+2)/6<max_n; i++){
        if((i*(i+1)*(i+2)/6)%2 == 1){
            odd.push_back(i*(i+1)*(i+2)/6);
        }
        all.push_back(i*(i+1)*(i+2)/6);
    }

    memset(dp,1000000,sizeof(dp));
    memset(odp,1000000, sizeof(odp));
    dp[0] = 0;
    odp[0] = 0;

    for(int i=1; i<max_n; i++){
        for(int j=0; j<all.size(); j++){
            if(i-all[j] < 0) {
                break;
            }
            dp[i] = min(dp[i],dp[i-all[j]] + 1);
        }
    }

    for(int i=1; i<max_n; i++){
        for(int j=0; j<odd.size(); j++){
            if(i-odd[j] < 0) {
                break;
            }
            odp[i] = min(odp[i],odp[i-odd[j]] + 1);
        }
    }

    while(true){
        int n;
        cin >> n;
        if(n == 0){
            break;
        }
        cout << dp[n] << " " << odp[n] << endl;
    }

    return 0;
}
