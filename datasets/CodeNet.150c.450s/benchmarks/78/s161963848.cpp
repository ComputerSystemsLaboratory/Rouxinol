#include <iostream>
#include <vector>
#include <cstdlib>
#include <climits>
#include <algorithm>
using namespace std;

#define MAX 1000000
using ll = long long;

int main(){
    vector<ll> v;
    vector<ll> odd_v;

    for(ll i = 1; i < MAX; ++i){
        ll num = i * (i + 1) * (i + 2) / 6;
        v.push_back(num);
        if(num & 1) odd_v.push_back(num);
    }

    int dp[MAX];
    int odd_dp[MAX];
    fill(dp, dp+MAX, INT_MAX);
    fill(odd_dp, odd_dp+MAX, INT_MAX);
    dp[0] = 0;
    odd_dp[0] = 0;

    for(int i = 0; i < MAX; ++i){
        for(int j = 0; j < v.size(); ++j){
            if(i - v[j] >= 0) dp[i] = min(dp[i - v[j]] + 1, dp[i]);
            else break;
        }

        for(int j = 0; j < odd_v.size(); ++j){
            if(i - odd_v[j] >= 0) odd_dp[i] = min(odd_dp[i - odd_v[j]] + 1, odd_dp[i]);
            else break;
        }
    }

    while(true){
        int n; cin >> n;
        if(!n) break;

        cout << dp[n] << ' ' << odd_dp[n] << endl;
    }

    return EXIT_SUCCESS;
}

