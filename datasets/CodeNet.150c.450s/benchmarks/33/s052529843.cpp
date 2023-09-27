
#include<iostream>
using namespace std;

signed main() {
    int s, p, q;
    int i, j;

    while (cin >> p >> q >> s) {
        int ans = 0;
        if (!s) break;

        //zeinuki de rekkyo.
        for (i = 1; i < s; i++) {
            for (j = 1; j < s; j++) {
                if (i*(100+p)/100 + j*(100+p)/100 != s) {
                    continue;
                }
                ans = max(ans, i*(100+q)/100 + j*(100+q)/100);
            }
        }
        cout << ans << endl;
    }
    return 0;
}