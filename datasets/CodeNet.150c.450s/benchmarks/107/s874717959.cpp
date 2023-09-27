#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i,k,n) for(int i = k; i < n; i++)
#define mmax(start, end) *max_element(start, end)
#define mmin(start, end) *min_element(start, end)
#define argmax max_element
#define argmin min_element
#define push push_back
#define pop pop_back
#define ALL(x) (x).begin(), (x).end()

typedef long long ll;
typedef string str;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

template<class T = ll> T in() {
    T _in;
    cin >> _in;
    return _in;
}

int dp[1001][1001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s[2];
    int len[2];
    rep(i, 2) {
        cin >> s[i];
        len[i] = s[i].size();
    }

    // 表埋め
    rep(i, len[0]+1) {
        dp[i][0] = i;
    }
    rep(j, len[1]+1) {
        dp[0][j] = j;
    }

    REP(i, 1, len[0]+1) {
        REP(j, 1, len[1]+1) {
            // if(i==2 && j==1) {
            //     cout << s[0][i-1] << " " << s[1][j-1] << endl;
            // }
            int top_left = dp[i-1][j-1];
            if(s[0][i-1] != s[1][j-1]) {
                top_left++;
            }
            int top = dp[i-1][j] + 1;
            int left = dp[i][j-1] + 1;
            dp[i][j] = min(top, min(top_left, left));
        }
    }

    // rep(i, len[0]+1) {
    //     rep(j, len[1]+1) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    cout << dp[len[0]][len[1]] << endl;

    return 0;
}

