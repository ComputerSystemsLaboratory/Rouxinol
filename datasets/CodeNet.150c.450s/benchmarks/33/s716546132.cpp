#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int x, y, s;
    while (1) {
        cin >> x >> y >> s;
        if (x == 0 && y == 0 && s == 0) break;

        int ans = -1;
        for (int px = 1; px < s; px++) {
            for (int py = px; py < s; py++) {
                if (px*(100+x)/100 + py*(100+x)/100 == s) {
                    int as = px*(100+y)/100 + py*(100+y)/100;
                    ans = max(ans, as);
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}