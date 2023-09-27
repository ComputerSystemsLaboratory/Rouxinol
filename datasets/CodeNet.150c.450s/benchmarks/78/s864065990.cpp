
// Pollock's conjecture
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1167&lang=jp 

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

const int MAX = 1000010;

int t(int n) { return n*(n+1)*(n+2) / 6; }
int main() { 
    vector<int> dp(MAX, 0);
    vector<int> odd_dp(MAX, 0);
    dp[0] = 0;
    odd_dp[0] = 0;
    for (int n = 1; n <= MAX; ++n) {
        dp[n] = n;
        odd_dp[n] = n;
        for (int k = 1; t(k) <= n; ++k) {
            dp[n] = min(dp[n - t(k)] + 1, dp[n]); 
            if (t(k) % 2) {
                odd_dp[n] = min(odd_dp[n - t(k)] + 1, odd_dp[n]); 
            }
        }
    }
    
    int N;
    while (cin >>  N) {
        if (N == 0) break;
        cout << dp[N] << " " << odd_dp[N] << endl;
    }
    return 0;
}