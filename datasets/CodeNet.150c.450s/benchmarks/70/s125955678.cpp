#include <iostream>
#include <map>
#include <vector>

using namespace std;

void getDays(int month, int day)
{
    int dayNum[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int fst=0; // 1/1 ?????? (month-1)??????????????\?????§?????\??°
    for(int i=0; i<month-1; i++)
        fst += dayNum[i];
    fst += day; // month???1??\?????§?????\??°
    
    switch(fst % 7) {
        case 0:
            cout << "Wednesday" << endl;
            break;
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
        default:
            break;
    }

}

int main(void)
{
    ios::sync_with_stdio(false);
    int month, day;
    while(1) {
        cin >> month >> day;
        if(month == 0) break;
        getDays(month, day);
    }

    return 0;
}