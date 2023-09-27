#include<iostream>
#include<vector>
using namespace std;

const int INF = 1<<21;

int main(){
    static int dp[1000000], dpo[1000000];
    for(int i = 1; i < 1000000; i++)    dp[i] = dpo[i] = INF;

    vector<int> tetra;
    for(int i = 1; i*(i+1)*(i+2)/6 < 1000000; i++){
        tetra.push_back(i*(i+1)*(i+2)/6);
    }

    for(int i = 0; i < tetra.size(); i++){
        for(int j = tetra[i]; j < 1000000; j++){
            if(dp[j-tetra[i]] == INF)   continue;
            
            dp[j] = min(dp[j], dp[j-tetra[i]]+1);
            if(tetra[i] % 2)    dpo[j] = min(dpo[j], dpo[j-tetra[i]]+1);
        }
    }

    int n;
    while(cin >> n, n){
        cout << dp[n] << " " << dpo[n] << endl;
    }

    return 0;
}
