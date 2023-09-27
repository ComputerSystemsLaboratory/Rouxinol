#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int m, d;
    string day[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    while (cin >> m >> d) {
        if (!m && !d){
            break;
        }
        int year = 2004, h;
        if (m == 1 || m == 2){
            year--;
            m += 12;
        }
        h = (year + year / 4 - year / 100 + year / 400 + (13 * m + 8) / 5 + d) % 7;
        cout << day[h] << endl;
    }

    return 0;
}