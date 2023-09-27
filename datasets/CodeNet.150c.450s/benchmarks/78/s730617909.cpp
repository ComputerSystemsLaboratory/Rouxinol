#include <iostream>
#include <deque>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#define loop(i,a,b) for(int i=a; i<int(b); i++)
#define rep(i,n) loop(i,0,n)

using namespace std;

typedef vector<int> vi;
int const inf = 1 << 28;
int main(){
    vi q, r;
    for (int i = 1;; i++){
        int pq = i*(i + 1)*(i + 2) / 6;
        q.push_back(pq);
        if (pq & 1) r.push_back(pq);

        if (pq > 1e6 + 100) break;
    }

    int n = 1000000;

    vi dp(n + 1, inf);
    dp[0] = 0;
    rep(i, q.size()){
        rep(j, n + 1){
            if (j - q[i] >= 0){
                dp[j] = min(dp[j], dp[j - q[i]] + 1);
            }
        }
    }

    vi dp2(n + 1, inf);
    dp2[0] = 0;
    rep(i, r.size()){
        rep(j, n + 1){
            if (j - r[i] >= 0){
                dp2[j] = min(dp2[j], dp2[j - r[i]] + 1);
            }
        }
    }

    int t;
    while (cin >> t && t){
        cout << dp[t] << " " << dp2[t] << endl;
    }
}