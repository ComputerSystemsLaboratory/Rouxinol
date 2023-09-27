#include <iostream>
#include <string>
using namespace std;
int countup_days(int m, int d) // m月d日が、1月1日から何日目か返す
{
    int         sum     = 0;
    const int   month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,};
    for (int i=1; i<m; i++) {
        sum += month[i];
    }
    return sum + d -1;
}
string what_day(int days) // 1/1からdays日後は何曜日か文字列を返す
{
    string day[]   = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
    return day[days%7];
}
int main()
{
    int m, d;
    while (true) {
        cin >> m >> d;
        if (m==0 && d==0)
            break;
        cout << what_day(countup_days(m, d)) << endl;
    }
}