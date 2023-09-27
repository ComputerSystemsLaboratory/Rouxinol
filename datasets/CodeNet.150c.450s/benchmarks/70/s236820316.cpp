#include <iostream>
#include <string>
#include <vector>
using namespace std;

int day[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string dateString[7] = {
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday"
};

int main() {
    int date[12][31];
    int cnt = 1;
    for (int i=0; i<12; ++i) {
        for (int j=0; j<day[i]; ++j) {
            if (i == 0 && j == 0) {
                date[i][j] = 3;
            } else if (j == 0) {
                date[i][j] = (date[i-1][day[i-1] - 1] + 1) % 7;
            } else {
                date[i][j] = (date[i][j-1] + 1) % 7;
            }
            cnt ++;
        }
    }

    int m, d;
    while (cin >> m >> d, m && d) {
        cout << dateString[date[m-1][d-1]] << endl;
    }
    return 0;
}