#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int I = 0; I < t; I++) {
        int n;
        cin >> n;
        bitset<200> b[64];
        for(int j = 0; j < n; j++) {
            long a;
            cin >> a;
            for(int k = 0; k < 63; k++)
                if(a & 1l << k)
                    b[k][n - 1 - j] = 1;
        }
        string s;
        cin >> s;
        int i = 0;
        for(int j = 0; j < n; j++) {
            int r = i;
            [&i, &j](bitset<200> *m, int R) {
                int k;
                for(k = i; k < R; k++)
                    if(m[k][j])
                        goto p;
                return;
            p:
                swap(m[k], m[i]);
                for(k = i; k < R; k++)
                    if(k != i && m[k][j])
                        m[k] ^= m[i];
                i++;
            }(b, 63);
            if(s[n - j - 1] == '1' && i > r) {
                cout << "1\n";
                goto o;
            }
        }
        cout << "0\n";
    o:;
    }
    return 0;
}
