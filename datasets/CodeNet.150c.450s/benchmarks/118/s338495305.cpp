#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int Y, M, D;
        cin >> Y >> M >> D;

        int days = 0;
        for (int i = 1; i < Y; i++) {
            if (i % 3 == 0) { days += 200; }
            else { days += 195; }
        }
        for (int i = 1; i < M; i++) {
            if (Y % 3 != 0 && i % 2 == 0) { days += 19; }
            else { days += 20; }
        }
        days += D;

        cout << 196471 - days << endl;
    }
    return 0;
}
