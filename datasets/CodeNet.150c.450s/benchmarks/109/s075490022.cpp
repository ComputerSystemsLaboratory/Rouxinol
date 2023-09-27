#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n;
    while (cin >> n, n) {
        int T[86410] = {};
        for (int i = 0; i < n; i++) {
            int h[2], m[2], s[2], t[2];
            for (int j = 0; j < 2; j++) {
                scanf("%d:%d:%d", &h[j], &m[j], &s[j]);
                t[j] = h[j] *3600 + m[j]*  60 + s[j];
                if (!j) T[t[j]]++;
                else T[t[j]]--;
            }
        }

        int ans = 0;
        for (int i = 0; i < 86400; i++) {
            if (i) T[i] += T[i - 1];
            ans = max(ans, T[i]);
        }
        
        cout << ans << endl;
    }

    return 0;
}