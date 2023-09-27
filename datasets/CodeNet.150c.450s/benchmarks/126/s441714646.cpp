#include <iostream>
using namespace std;

int masu[20][20];

int main(void) {
    while (1) {
        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 20; j++) {
                masu[i][j] = 0;
            }
        }
        masu[1][1] = 1;

        int a, b, n;
        cin >> a >> b;
        if (a == 0 && b == 0) break;

        cin >> n;
        while (n--) {
            int tmp_x, tmp_y;
            cin >> tmp_x >> tmp_y;
            masu[tmp_y][tmp_x] = -1;
        }

        for (int i = 1; i <= b; i++) {
            for (int j = 1; j <= a; j++) {
                if (masu[i][j] < 0) continue;

                if (masu[i-1][j] >= 0) {
                    masu[i][j] += masu[i-1][j];
                }
                if (masu[i][j-1] >= 0) {
                    masu[i][j] += masu[i][j-1];
                }
            }
        }
        cout << masu[b][a] << endl;
    }
    return 0;
}