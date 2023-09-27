#include <iostream>

using namespace std;

int n, a, b, c, x;

int next_rand() {
    x = (a * x + b) % c;
    return x;
}

int main() {
    while (cin >> n >> a >> b >> c >> x) {
        if ((n || a || b || c || x) == 0) break;
        int slot[n];
        for (int i = 0; i < n; i++) cin >> slot[i];

        int frame = 0;
        int next = x;
        for (int i = 0; i < n; i++) {
            while (frame <= 10000) {
                if (next == slot[i]) {
                    next = next_rand();
                    if (i == n-1) break;
                    else {
                        frame++;
                        break;
                    }
                }
                next = next_rand();
                frame++;
            }
        }

        if (frame > 10000) cout << -1 << endl;
        else cout << frame << endl;
    }
    return 0;
}