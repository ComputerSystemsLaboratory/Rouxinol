#include <iostream>
using namespace std;

int main() {
    int m, t, f, sum;
    while (true) {
        cin >> m >> t >> f;
        if (m == -1 && t == -1 && f == -1) {
            break;
        }
        if (m != -1) {
            sum = m;
        } else {
            cout << "F" << endl;
            continue;
        }

        if (t != -1) {
            sum += t;
        } else {
            cout << "F" << endl;
            continue;
        }

        if (sum >= 80) {
            cout << "A" << endl;
        } else if (sum < 80 && sum >= 65) {
            cout << "B" << endl;
        } else if (sum < 65 && sum >= 50) {
            cout << "C" << endl;
        } else if (sum >= 30 && sum < 50) {
            if (t != -1) {
                if (f >= 50) {
                    cout << "C" << endl;
                } else {
                    cout << "D" << endl;
                }
            } else {
                cout << "D" << endl;
            }
        } else {
            cout << "F" << endl;
        }
    }
    return 0;
}