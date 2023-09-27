#include <iostream>

using namespace std;

#define INF 1 << 28

int main() {
    int N;
    while (cin >> N) {
        if (N == 0) break;
        int x[N];
        int y[N];
        x[0] = y[0] = 0;
        for (int i = 1; i < N; i++) {
            int prev, dir;
            cin >> prev >> dir;
            switch (dir) {
                case 0:
                    x[i] = x[prev] - 1;
                    y[i] = y[prev];
                    break;
                case 1:
                    y[i] = y[prev] + 1;
                    x[i] = x[prev];
                    break;
                case 2:
                    x[i] = x[prev] + 1;
                    y[i] = y[prev];
                    break;
                case 3:
                    y[i] = y[prev] - 1;
                    x[i] = x[prev];
                    break;
            }
        }
        int min_x = 0, min_y = 0;
        int max_x = 0, max_y = 0;
        for (int i = 0; i < N; i++) {
            if (x[i] < min_x) min_x = x[i];
            if (y[i] < min_y) min_y = y[i];
            if (x[i] > max_x) max_x = x[i];
            if (y[i] > max_y) max_y = y[i];
        }
//        cout << "max_x: " << max_x << " min_x: " << min_x << endl;
//        cout << "max_y: " << max_y << " min_y: " << min_y << endl;
        cout << max_x - min_x + 1 << ' ' << max_y - min_y + 1 << endl;
    }
    return 0;
}