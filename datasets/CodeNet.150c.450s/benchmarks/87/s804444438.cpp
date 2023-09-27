#include <iostream>
#include <algorithm>
using namespace std;

bool check (int d[10][5], int h) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < 5; j++) {
            int count = 1;
            while (j + 1 < 5 && d[i][j] == d[i][j + 1] && d[i][j] != 0) {
                j++;
                count++;
            }
            if (count >= 3) return true;
        }
    }
    return 0;
}

int main ()
{
    int h;
    while (cin >> h, h) {
        int d[10][5];
        for (int i = h - 1; i >= 0; i--) {
            for (int j = 0; j < 5; j++) {
                int t; cin >> t; d[i][j] = t;
            }
        }

        int res = 0;
        while (check(d, h)) {
            for (int i = 0; i < h; i++) {
                for (int j = 0; j < 5; j++ ) {
                    int count = 1;
                    while (j + 1 < 5 && d[i][j] == d[i][j + 1] && d[i][j] != 0) {
                        j++; count++;
                    }
                    if (count >= 3) {
                        res += count * d[i][j];
                        for (int k = j; count--; k--) {
                            d[i][k] = 0;
                        }
                    }
                }
            }

            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < h; j++) {
                    if (d[j][i] == 0) {
                        int n = 0;
                        for (int k = j; k < h; k++) {
                            if (d[k][i] != 0) n++;
                            if (k < h - 1) {
                                d[k][i] = d[k + 1][i];
                            } else {
                                d[k][i] = 0;
                            }
                        }
                        if (n > 0) j--;
                    }
                }
            }
        }
        cout << res << endl;
    }

    return 0;
}