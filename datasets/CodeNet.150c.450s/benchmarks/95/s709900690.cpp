#include <bits/stdc++.h>
using namespace std;

bool solve() {
    int N;
    cin >> N;

    if(!N) return false;

    int ans = 0;
    bool l = false, r = false;
    bool nxt = true;
    for(int i = 0; i < N; i++) {
        string s;
        cin >> s;
        bool &b = (s[0] == 'l' ? l : r);
        b = (s[1] == 'u' ? true : false);
        if(l == nxt && r == nxt) {
            ans++;
            nxt = !nxt;
        }
    }
    cout << ans << endl;
    return true;
}

int main() {
    while(solve());
    return 0;
}

