#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
    string m = "Monday", tu = "Tuesday", w = "Wednesday", th = "Thursday", f = "Friday",
        sa = "Saturday", su = "Sunday";
    while(1) {
        int a=0, b=0;
        cin >> a >> b;
        if(a == 0 && b == 0)
            return 0;

        switch(a) {
        case 12:
            b += 30;
        case 11:
            b += 31;
        case 10:
            b += 30;
        case 9:
            b += 31;
        case 8:
            b += 31;
        case 7:
            b += 30;
        case 6:
            b += 31;
        case 5:
            b += 30;
        case 4:
            b += 31;
        case 3:
            b += 29;
        case 2:
            b += 31;
        default:
            ;
        }
        //cout << b << ' ';
        if(b % 7 == 0)
            cout << w << endl;
        if(b % 7 == 1)
            cout << th << endl;
        if(b % 7 == 2)
            cout << f << endl;
        if(b % 7 == 3)
            cout << sa << endl;
        if(b % 7 == 4)
            cout << su << endl;
        if(b % 7 == 5)
            cout << m << endl;
        if(b % 7 == 6)
            cout << tu << endl;
    }
}
