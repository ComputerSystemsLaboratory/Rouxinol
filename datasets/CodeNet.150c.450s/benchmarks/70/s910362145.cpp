#include <iostream>

using std::cout;
using std::endl;

int getDays(int month, int day);

int main()
{
    int month, day;
    while (true) {
        std::cin >> month >> day;

        if (month == 0 && day == 0) {
            break;
        }

        int days = getDays(month, day);
        int mod = days % 7;
        switch (mod) {
        case 1:
            cout << "Thursday" << endl;
            break;
        case 2:
            cout << "Friday" << endl;
            break;
        case 3:
            cout << "Saturday" << endl;
            break;
        case 4:
            cout << "Sunday" << endl;
            break;
        case 5:
            cout << "Monday" << endl;
            break;
        case 6:
            cout << "Tuesday" << endl;
            break;
        case 0:
            cout << "Wednesday" << endl;
            break;
        }
    }

    return 0;
}

int getDays(int month, int day)
{
    int days = 31 * (month - 1) + day;

    int minus = 0;
    if (month > 2) {
        minus += 2;
    }
    if (month > 4) {
        minus++;
    }
    if (month > 6) {
        minus++;
    }
    if (month > 9) {
        minus++;
    }
    if (month > 11) {
        minus++;
    }

    return (days -= minus);
}