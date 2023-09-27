#include <bits/stdc++.h>
using namespace std;

int n ;
vector<vector<int> > d;

void Erase () {
    for (int i = 0; i < 5; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (d[j][i] == 0) {
                int k = j;
                bool flag = true;
                while (k >= 0 && d[k][i] == 0) {
                    k--;
                    if (k < 0) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    d[j][i] = d[k][i];
                    d[k][i] = 0;
                }
            }
        }
    }
}

int Check () {
    int ret = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            int count = 0;
            int num = d[i][j];
            int k = j;
            while (num != 0 && d[i][k] == num) {
                count++;
                k++;
            }

            if (count >= 3) {
                ret += count * num;
                while (k > j) {
                    k--;
                    d[i][k] = 0;
                }

                break;
            }
        }
    }

    return ret;
}

int main ()
{
    while (cin >> n, n) {
        d.clear();
        d.resize(n, vector<int>(5));
        for (auto &i : d)
            for (auto &j : i) cin >> j;

        int num = 1;
        int res = 0;
        while (num > 0) {
            Erase();
            num = Check();
            Erase();
            res += num;
        }

        cout << res << endl;
    }

    return 0;
}