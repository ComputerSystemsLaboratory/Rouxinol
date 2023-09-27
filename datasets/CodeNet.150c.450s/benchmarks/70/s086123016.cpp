#include <iostream>
#include <cstdio>
using namespace std;
string name[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
int dayOfWeek(int y, int m, int d) {
    if(m == 1 || m == 2) {
        y--;
        m += 12;
    }
    return(y + y / 4 - y / 100 + y / 400 + (13*m + 8) / 5 + d) % 7;
}

int main(void) {
    int y = 2004, m, d;
    while(scanf("%d %d", &m, &d), m + d != 0) {
        cout << name[dayOfWeek(y, m, d)] << endl;
    }
    return(0);
}