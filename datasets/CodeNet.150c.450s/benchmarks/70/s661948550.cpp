#include <iostream>

using namespace std;

int M[]{0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366};
string W[]{"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};

int main() {
    int m, d;
    while (cin >> m >> d) {
        if (m == 0) break;
        cout << W[(M[m - 1] + d - 1) % 7] << endl;
    }
}
