#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    string weeks[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    struct tm  t;
    t.tm_year  = 2004 - 1900;
    t.tm_hour  = 0;
    t.tm_min   = 0;
    t.tm_sec   = 0;
    t.tm_isdst = 0;

    for (int month, day; cin >> month >> day && (month || day);) {
        t.tm_mon   = month - 1;
        t.tm_mday  = day;
        mktime(&t);
        cout << weeks[t.tm_wday] << endl;
    }

    return 0;
}