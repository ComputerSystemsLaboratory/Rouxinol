#include <bits/stdc++.h>
using namespace std;
const long long INF = 1LL<<60;

int LIS(const vector<long long> &a){
    int N = (int)a.size();
    vector<long long> dp(N, INF);
    for(int i = 0; i < N; i++){
        //dp[k] >= a[i]　となる最小のイテレータを見つける
        auto it = lower_bound(dp.begin(), dp.end(), a[i]);
        
        //そこをa[i]で置き換える
        *it = a[i];
    }

    //dp[k] < INF　となる最大のkに対してk+1が答え
    //それはdp[k] >= INFとなる最小のkに一致する
    return lower_bound(dp.begin(), dp.end(), INF) - dp.begin();
}

int main(){
    int N; cin >> N;
    vector<long long> a(N);
    for(int i = 0; i < N; i++) cin >> a[i];
    cout << LIS(a) << endl;
}
