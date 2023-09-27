#include<iostream>

using namespace std;

int main() {
    int n;
    int y, m, d;
    cin >> n;
    for (; n>0; n--) {
        int day = 0;
        cin >> y >> m >> d;
        if (y%3 == 0 || m%2 != 0) {
            day += 20-d;
        }
        else {
            day += 19-d;
        }
        day++;
        for (m++; m<11; m++) {
            if (y%3 != 0 && m%2 == 0) {
                day += 19;
            }
            else {
                day += 20;
            }
        }
        for (y++; y<1000; y++) {
            if (y%3 == 0) {
                day += 200;
            }
            else {
                day += 195;
            }
        }
        cout << day << endl;
    }
    return 0;
}