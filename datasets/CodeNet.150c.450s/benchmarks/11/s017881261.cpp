#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    unsigned long bit = 0;
    char c;

    cin >> n;

    while (n--) {
        cin >> c >> t;
        bit |= 1UL << ((c % 14 - 1) % 4) * 13 + t - 1;
        // bitset<52> debug(bit);
        // cout << c << t << "\t" << debug << endl;
    }

    for (n = 0; n < 4 * 13; ++n) {
        if (!(bit & 1)) {
            cout << "SHCD"[n / 13] << " " << 1 + n % 13 << endl;
        }
        bit >>= 1;
    }

    return 0;
}