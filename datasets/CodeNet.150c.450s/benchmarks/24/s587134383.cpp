#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n, m, d, p, res, cnt[11];
    while (cin >> n >> m, n | m) {
        res = 0;
        for (int i = 0; i < 11; ++i)
            cnt[i] = 0;
        for (int i = 0; i < n; ++i) {
            cin >> d >> p;
            cnt[p] += d;
        }
        for (int i = 10; i > 0; --i) {
            if (m > cnt[i]) {
                m -= cnt[i];
            } else {
                res += i * (cnt[i] - m);
                m = 0;
            }
        }
        cout << res << endl;
    }
    return 0;
}