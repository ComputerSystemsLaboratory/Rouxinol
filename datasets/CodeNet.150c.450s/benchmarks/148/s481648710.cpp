#include<bits/stdc++.h>

#define ntest 0

using namespace std;

map<string,int> cnt;
string verdict[] = {"AC", "WA", "TLE", "RE"};
int n;
string s;
void solve() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> s;
        cnt[s]++;
    }
    for (int i = 0; i < 4; ++i) {
        cout << verdict[i] << " x " << cnt[verdict[i]] << '\n';
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    if(ntest){
        int t;
        cin >> t;
        while(t--) solve();
    } else {
        solve();
    }

}


