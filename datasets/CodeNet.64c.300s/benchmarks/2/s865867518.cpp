#include <iostream>

using namespace std;

int main() {
    int m, f, r;
    char result;
    while (true) {
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1) {
            break;
        }
        if ((m + f) >= 80) {
            result = 'A';
        } else if ((m + f) >= 65) {
            result = 'B';
        } else if ((m + f) >= 50) {
            result = 'C';
        } else if ((m + f) >= 30) {
            if (r >= 50) {
                result = 'C';
            } else {
                result = 'D';
            }
        } else {
            result = 'F';
        }
        if (m == -1 || f == -1) {
            result = 'F';
        }
        cout << result << endl;
    }

}