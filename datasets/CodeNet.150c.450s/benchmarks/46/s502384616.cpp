#include <iostream>
using namespace std;
int main() {
    int n, m;
    while(1) {
    int count = 0;
        cin >> n >> m;
        if (n == 0 && m == -0) {
            break;
        }
        for (int i = 1; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int p = j + 1; p <= n; p++) {
                        if (i + j + p == m) {
                            count++;
                        }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
