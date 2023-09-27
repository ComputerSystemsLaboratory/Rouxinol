#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int n;
const long long INF = 1e12;

int main() {
    cin >> n;
    vector<long long> a(n, 0);
    for(int i = 0; i < n; ++i) cin >> a.at(i);
    vector<long long> dp(n+1, INF);
    dp[0] = -1;

    int now = 0;
    for(int i = 0; i < n; ++i) {
        int check = a.at(i);
        if(dp.at(now) < check) {
            dp.at(now+1) = check;
            now++;
        }else {
            int chno = lower_bound(dp.begin(), dp.end(), check) - dp.begin();
            dp.at(chno) = check;
        }
    }
    cout << now << endl;
}
