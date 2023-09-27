#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
// Welcome to my source code!

int main() {
    bool t[30] = { false };
    int a;
    for (int i = 0; i < 28; i++) {
        cin >> a;
        t[a-1] = true;
    }
    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < 30; i++) {
        if (!t[i]) {
            if (!ans1) ans1 = i + 1;
            else {
                ans2 = i + 1;
                break;
            }
        }
    }
    cout << ans1 << '\n' << ans2 << endl;
}
