#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define all(c) (c).begin(), (c).end()
const int inf = 1 << 28;

template<typename T> inline void chmin(T& t, T f){if(t > f)t = f;}

int solve(int n, vector<int>& d){
    sort(all(d));
    vector<int> dp(n + 1, inf); dp[0] = 0;
    for(int v=0; v<=n; ++v){
        for(const auto x: d){
            if(v < x)continue;
            chmin(dp[v], dp[v - x] + 1);
        }
    }
    return dp[n];
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> d(m);
    for(auto& e: d)cin >> e;
    cout << solve(n, d) << '\n';
    return 0;
}