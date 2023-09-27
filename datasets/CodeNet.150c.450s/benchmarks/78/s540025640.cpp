#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

const int size = 200;
const int limit = 1000001;
int dp[limit], dp_odd[limit];
int tetra[size], odd[size];

int main(void){
    int size_odd = 0;
    for(int i=1; i<size+1; ++i) {
        ll t = i*(i+1)*(i+2)/6;
        tetra[i-1] = t;
        if(t%2==1) {odd[size_odd]=t; size_odd++;}
    }
    int inf = numeric_limits<int>::max();
    rep(i, limit) dp[i] = dp_odd[i] = inf;
    dp[0] = 0;
    dp_odd[0] = 0;
    rep(i, size) {
        for(int j=tetra[i]; j<limit; ++j) 
            dp[j] = min(dp[j-tetra[i]]+1, dp[j]);
    }
    rep(i, size_odd) {
        for(int j=odd[i]; j<limit; ++j) 
            dp_odd[j] = min(dp_odd[j-odd[i]]+1, dp_odd[j]);
    }

    int n;
    while(cin >> n && n) {
        cout << dp[n] << " ";
        cout << dp_odd[n] << endl;
    }
}
