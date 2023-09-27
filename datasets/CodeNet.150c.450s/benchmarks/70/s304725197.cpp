#include <iostream>
#include <string>
#include <vector>
using namespace std;

const string DOW[] = {
    "Saturday",
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday"
};

string getDOW(int y, int m, int d) {
    if (m <= 2) {
        --y;
        m += 12;
    }
    int c = y / 100;
    y %= 100;
    int h = d + (26 * (m + 1)) / 10 + y + y / 4 + 5 * c + c / 4;
    return DOW[h % 7];
}

int main() {
    int m, d;
    while (cin >> m >> d, m) {
        cout << getDOW(2004, m, d) << endl;
    }
    return 0;
}