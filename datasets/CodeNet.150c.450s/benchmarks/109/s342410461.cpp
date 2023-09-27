#include <iostream>
#include <algorithm>

using namespace std;

int st[10001];
int fn[10001];

int main()
{
    int n;

    while (cin >> n, n) {
        int h, m, s;
        char ch;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            cin >> h >> ch >> m >> ch >> s;
            st[i] = (h * 60 + m) * 60 + s;
            cin >> h >> ch >> m >> ch >> s;
            fn[i] = (h * 60 + m) * 60 + s;
        }

        sort(st, st + n);
        sort(fn, fn + n);

        int i_s, i_f, tmp;
        i_s = i_f = tmp = 0;
        while (i_s < n && i_f < n) {
            if (st[i_s] < fn[i_f]) {
                i_s++;
                tmp++;
                ans = max(ans, tmp);
            }
            else {
                i_f++;
                tmp--;
            }
        }

        cout << ans << endl;
    }

    return 0;
}