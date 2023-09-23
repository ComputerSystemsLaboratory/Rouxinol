#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

int main() {
    int n, a, sum[5010];
    while (cin >> n, n) {
        memset(sum, 0, sizeof sum);
        cin >> a;
        sum[0] = a;
        for (int i=1; i<n; ++i) {
            cin >> a;
            sum[i] = sum[i-1] + a;
        }
        int mx = -100000;
        for (int i=0; i<n; ++i) {
            for (int j=i; j<n; ++j) {
                if (i-1 < 0) {
                    mx = max(mx, sum[j]);
                } else {
                    mx = max(mx, sum[j] - sum[i-1]);
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}