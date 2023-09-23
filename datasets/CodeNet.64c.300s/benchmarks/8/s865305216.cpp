/* ITP1_5_D: Structured Programming */

#include <iostream>
using namespace std;

void call(int n) {
    for (int i = 1; i <= n; i++) { // CHECK_NUM:
        int x = i;
        if (x % 3 == 0) {
            cout << " " << i;
        }
        else {
            do { // INCLUDE3:
                if (x % 10 == 3) {
                    cout << " " << i;
                    break;
                }
            } while (x /= 10);
        }
    }
    cout << endl;
}

int main() {
    std::ios::sync_with_stdio(false);

    int n;
    cin >> n;
    call(n);

    return 0;
}