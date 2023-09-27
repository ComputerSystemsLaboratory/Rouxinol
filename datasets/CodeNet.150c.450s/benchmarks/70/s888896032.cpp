#include <iostream>
#include <string>
using namespace std;

int days[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int from_1_1(int m, int d) 
{
    int day_from_1_1 = d;
    for (int i = 0; i < m; i++) {
        day_from_1_1 += days[i];
    }
    return day_from_1_1;
}

int main(void)
{
    int m, d;
    string day;
    while (cin >> m >> d) {
        if (m == 0 && d == 0) break;
        switch ( from_1_1(m, d) % 7 ) {
            case 1:
                day = "Thursday";
                break;
            case 2:
                day = "Friday";
                break;
            case 3:
                day = "Saturday";
                break;
            case 4:
                day = "Sunday";
                break;
            case 5:
                day = "Monday";
                break;
            case 6:
                day = "Tuesday";
                break;
            case 0:
                day = "Wednesday";
                break;
            default: // DO_NOTHING
                break;
        }
        cout << day << endl;
    }
    return 0;
}
    