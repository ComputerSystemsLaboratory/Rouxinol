#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n, m;
    while (cin >> n >> m, n | m) {
        int taro[n], hana[m];
        int s, sumt = 0, sumh = 0;
        bool flag = true;
        for (int i = 0; i < n; ++i) {
            cin >> s;
            taro[i] = s;
            sumt += s;
        }
        for (int i = 0; i < m; ++i) {
            cin >> s;
            hana[i] = s;
            sumh += s;
        }
        int sub = sumt - sumh;
        for (int i = 0; i < n; ++i) {
            if (!flag)
                break;
            for (int j = 0; j < m; ++j) {
                if (!flag)
                    break;
                int tmp = (taro[i] - hana[j]) * 2;
                if (tmp == (sumt - sumh)) {
                    cout << taro[i] << ' ' << hana[j] << endl;
                    flag = false;
                }
            }
        }
        if (flag)
            cout << -1 << endl;
    }
    return 0;
}