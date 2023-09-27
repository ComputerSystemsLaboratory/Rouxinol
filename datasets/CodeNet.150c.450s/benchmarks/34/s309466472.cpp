#include <bits/stdc++.h>

#define LL long long
#define VI vector<int>
#define VB vector<bool>
#define VL vector<long long>
#define FOR(i,a,b) for(int i= (a); i<((int)b); ++i)
#define RFOR(i,a) for(int i=(a); i >= 0; --i)
#define FOE(i,a) for(auto i : a)
#define ALL(c) (c).begin(), (c).end()
#define RALL(c) (c).rbegin(), (c).rend()
#define DUMP(x)  cerr << #x << " = " << (x) << endl;
#define SUM(x) std::accumulate(ALL(x), 0LL)
#define MIN(v) *std::min_element(v.begin(), v.end())
#define MAX(v) *std::max_element(v.begin(), v.end())
#define EXIST(v,x) (std::find(v.begin(), v.end(), x) != v.end())
#define BIT(n) (1LL<<(n))
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define EPS 1e-14

const std::string YES = "YES", Yes = "Yes", NO = "NO", No = "No";

template<class T> T ceil(T a, T b) { return (a + b - 1) / b; }
template<class T> void print(T x) { std::cout << x << std::endl; }
// 4近傍（右, 下, 左, 上）
const std::vector<int> dy = { 0, -1, 0, 1 };
const std::vector<int> dx = { 1, 0, -1, 0 };

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);


    vector<int> dp(40, 0);
    dp[0] = 1;
    FOR(i, 0, 31) {
        dp[i + 1] += dp[i];
        dp[i + 2] += dp[i];
        dp[i + 3] += dp[i];
    }

    while (true ){
        int n;
        cin >> n;
        if (n == 0) { break; }
        print(ceil(dp[n], 3650));
    }

}


