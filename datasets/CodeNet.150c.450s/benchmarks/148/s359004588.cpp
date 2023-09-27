#include <bits/stdc++.h>
using namespace std;
string s[4] = {"AC", "WA", "TLE", "RE"};
int cnt[4];
int main() {
    int t; cin >> t;
    while(t--) {
        string k; cin >> k;
        for(int i=0; i<4; i++) {
            if(s[i] == k) cnt[i]++;
        }
    }
    for(int i=0; i<4; i++) {
        cout << s[i] << " x " << cnt[i] << "\n";
    }
}