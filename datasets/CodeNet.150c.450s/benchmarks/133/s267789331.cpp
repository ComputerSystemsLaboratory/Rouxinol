#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
int INF = 1e9+7;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
signed main() {
    int D;
    cin >> D;
    vector<int>c(26);
    for(int i = 0; i < 26; i++) {
        cin >> c[i];
    }
    vector<vector<int>>s(D,vector<int>(26));
    for(int i = 0; i < D; i++) {
        for(int j = 0; j < 26; j++) {
            cin >> s[i][j];
        }
    }
    vector<int>t(D);
    for(int i = 0; i < D; i++) {
        cin >> t[i];
    }
    int ans = 0;
    vector<int>Last(26);
    for(int i = 0; i < D; i++) {
        ans+=s[i][t[i]-1];
        Last[t[i]-1] = i+1;
        for(int j = 0; j < 26; j++) {
            ans-=c[j]*(i+1-Last[j]);
        }
        cout << ans << endl;
    }
}

