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

template<class T> T ceil(T a, T b) { return (a + b - 1) / b; }
template<class T> void print(T x) { std::cout << x << std::endl; }

const std::string YES = "YES", Yes = "Yes", NO = "NO", No = "No";
const std::vector<int> dy = { 0, -1, 0, 1 }, dx = { 1, 0, -1, 0 };    // 4近傍（右, 下, 左, 上）

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, target;
    cin >> N;
    vector<int> A(N - 1);
    FOR(i, 0, N - 1) {
        cin >> A[i];
    }
    cin >> target;

    vector<vector<LL>> dp(N, vector<LL>(100, 0));
    dp[1][A[0]] = 1;

    FOR(i, 1, A.size()) {
        int a = A[i];

        FOR(j, 0, dp[0].size()) {

            // +
            if (j + a <= 20) {
                dp[i + 1][j + a] += dp[i][j];
            }

            // -
            if (0 <= j - a) {
                dp[i + 1][j - a] += dp[i][j];
            }
        }
    }

    print(dp[N - 1][target]);
}


