#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int month, day;
    string weekday[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    while (cin >> month >> day) {   
        if (month + day == 0) { break; }  
        time_t rawtime;
        struct tm * timeinfo;

        time(&rawtime);
        timeinfo = localtime(&rawtime);

        timeinfo->tm_year = 2004-1900;
        timeinfo->tm_mon = month - 1;
        timeinfo->tm_mday = day;
        
        mktime(timeinfo);

        cout << weekday[timeinfo->tm_wday] << endl;
    }
    return 0;
}