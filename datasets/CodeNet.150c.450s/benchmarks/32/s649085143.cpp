#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>

using ll = long long;

using namespace std;

int main() {
    while (true) {
        int m, nmi, nma;
        cin >> m >> nmi >> nma;
        if (m == 0) break;
        int prev, ans, dma = 0;
        for (int i=0, ai; i<m; i++) {
            cin >> ai;
            if (i >= nmi && i <= nma) {
                if (dma >= ai - prev) {
                    ans = i;
                    dma = ai - prev;
                }
            }
            prev = ai;
        }
        cout << ans << '\n';
    }
    return 0;
}
