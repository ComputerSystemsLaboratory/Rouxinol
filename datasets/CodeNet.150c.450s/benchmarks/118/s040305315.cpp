#include <iostream>
#include <algorithm>
using namespace std;

int days_of_month(int year, int month) {
    if (year % 3 == 0) return 20;
    if (month % 2 == 1) return 20;
    return 19;
}

int days_of_year(int year) {
    if (year % 3 == 0) return 200;
    return 195;
 }

int nokori_days(int year, int month, int day) {
    int result = 0;
    result += days_of_month(year, month) - day + 1;
    for(int m=month+1; m<=10; m++) {
        result += days_of_month(year, m);
    }
    for(int y=year+1; y<=999; y++) {
        result += days_of_year(y);
    }
    return result;
}

int main(void) {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int y, m, d;
        cin >> y >> m >> d;
        cout << nokori_days(y, m, d) << endl;
    }
    return 0;
}