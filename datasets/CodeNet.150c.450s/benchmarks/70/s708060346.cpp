#include <iostream>
using namespace std;

const char *weekday_str[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
enum WD { SUNDAY = 0, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
enum WD zeller(int year, int mon, int day){
    if(year < 1582 || mon < 1 || day < 1) throw;
    if(mon <= 2){ year--; mon += 12; }
    unsigned int h = (year + year/4 - year/100 + year/400 + (13*mon+8)/5 + day) % 7;
    return (WD)h;
}

int main(){
    int m, d;
    while(cin >> m >> d){
        if(m == 0 && d == 0) break;
        WD wd = zeller(2004, m, d);
        cout << weekday_str[wd] << endl;
    }
    return 0;
}