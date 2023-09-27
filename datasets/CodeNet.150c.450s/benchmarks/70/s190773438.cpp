#include <iostream>
#include <string>
using namespace std;

int day[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string date[7] = {
    "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
};

int main() {
    int m, d;
    while (cin >> m >> d, m && d) {
        int t = d;
        for (int i=0; i<m-1; ++i) {
            t += day[i];
        }
        cout << date[(t + 2) % 7] << endl;
    }
    return 0;
}