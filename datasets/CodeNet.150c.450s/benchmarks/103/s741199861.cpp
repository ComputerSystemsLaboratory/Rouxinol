#include <iostream>
using namespace std;
int main()
{
    int n, s;
    while (cin >> n >> s, (s | n)) {
        int res = 0;
        for (int i = 0; i < (1 << 10); ++i) {
            int t = 0, c = 0;
            for (int j = 0; j < 10; ++j) if ((i >> j) & 1) {
                t += j;
                c++;
            }
            if (c == n && t == s) res++;
        }
        cout << res << endl;
    }
    return 0;
}