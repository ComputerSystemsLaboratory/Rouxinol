#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cur, nxt, price;
    while (cin >> cur >> nxt >> price, cur) {
        int ma = 0;
        for (int sum = 0; sum <= 2000; sum++) {
            for (int x = 1; x < sum; x++) {
                int y = sum - x;
                int cur_x = x * (100 + cur) / 100;
                int cur_y = y * (100 + cur) / 100;
                if (cur_x + cur_y != price) continue;
                int nxt_x = x * (100 + nxt) / 100;
                int nxt_y = y * (100 + nxt) / 100;
                ma = max(ma, nxt_x + nxt_y);
            }
        }
        cout << ma << endl;
    }
    return 0;
}
