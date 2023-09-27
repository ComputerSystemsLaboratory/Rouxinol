#include <iostream>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        int scores[2] = {};
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            if (a > b) {
                scores[0] += a + b;
            } else if (a < b) {
                scores[1] += a + b;
            } else {
                scores[0] += a;
                scores[1] += b;
            }
        }
        cout << scores[0] << " " << scores[1] << endl;
    }
}