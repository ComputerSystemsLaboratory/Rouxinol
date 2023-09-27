#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 222;
const int MASK = 61;

int n;
string str;
ll a[N];
ll tmask[MASK];

int main() {
    int tc; cin >> tc;
    while (tc--) {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        cin >> str; str = " " + str;
        memset(tmask, 0, sizeof(tmask));
        int res = 0;
        for (int i = n; i >= 1; i--) {
            if (str[i] == '0') {
                for (int j = 60; j >= 0; j--) if (a[i] >> j & 1ll) {
                    if (!tmask[j]) {
                        tmask[j] = a[i];
                        break;
                    }
                    a[i] ^= tmask[j];
                }
            } else {
                for (int j = 60; j >= 0; j--) if (a[i] >> j & 1ll)
                    a[i] ^= tmask[j];
                if (a[i]) {
                    res = 1;
                    break;
                }
            }
        }
        cout << res << endl;
    }
}
