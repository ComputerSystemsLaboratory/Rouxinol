#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
#include <string>
#include <sstream>
#include <set>
#include <bitset>
using namespace std;

int r, c;
bitset<10000> cookie[10];

int main() {
    while (cin >> r >> c && r) {
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j) {
                bool upward;
                cin >> upward;
                cookie[i][j] = upward;
            }
        int ans = 0;
        for (int i = 0; i < (1 << r); ++i) {
            for (int j = 0; j < r; ++j)
                if (i & (1 << j)) cookie[j].flip();
            int possible_ans = 0;
            for (int j = 0; j < c; ++j) {
                int up_cookie_count = 0;
                for (int k = 0; k < r; ++k)
                    if (cookie[k][j]) up_cookie_count++;
                possible_ans += max(up_cookie_count, r - up_cookie_count);

            }
            ans = max(ans, possible_ans);
            for (int j = 0; j < r; ++j)
                if (i & (1 << j)) cookie[j].flip();
        }
        cout << ans << endl;
    }
    return 0;
}
