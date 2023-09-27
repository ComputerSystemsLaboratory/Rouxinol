#include <iostream>
using namespace std;
int main() {
    int n;
    while (cin >> n && n) {
        int cnt = 0;
        for (int i=2; i<n; ++i) {
            int sq = (n - (i - 1) * i / 2);
            if (0 < sq && sq % i == 0) {
                cnt ++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}