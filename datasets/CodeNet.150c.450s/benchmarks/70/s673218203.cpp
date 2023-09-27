#include <iostream>
#include <string>

using namespace std;

int main() {
    int m, d, past;
    int day[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    string week[] = { "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday" };
    while (cin >> m >> d, m != 0) {
        past = 0;
        for (int i = 0; i < m - 1; i++) {
            past += day[i];
        }
        past += d - 1;
        cout << week[past % 7] << endl;
    }

    return 0;
}