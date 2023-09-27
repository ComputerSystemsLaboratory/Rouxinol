#include <iostream>
#include <vector>

using namespace std;

int main() {
    for (;;) {
        int n;
        cin >> n;
        if (n == 0) break;

        int res = 0;
        for (int j = 1; j < n; j++) {
            int s = 0;
            for (int k = j; k < n; k++) {
                s += k;
                if (s == n) {
                    res++;
                    break;
                }
            }
        }

        cout << res << endl;
    }
}