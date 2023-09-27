#include <iostream>
#include <cmath>
#include <string>

// https://github.com/rippro/lib/blob/master/util/date.cpp

using namespace std;
typedef long long ll;

string day[] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
};

string month[] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
};

ll zeller(long y, long m, long d){
    if (m <= 2){
        y--;
        m += 12;
    }
    return (365 * y) + (y / 4) - (y / 100) + (y / 400) + (306 * (m + 1)) / 10 + d - 429;
}

bool leap_year(int y){
    return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}

#define loop(i,a,b) for(ll i=(a); i<ll(b); i++)
#define rep(i,b) loop(i,0,b)

int main(){
    int m, d;
    while (cin >> m >> d && m){
        cout << day[(zeller(2004, m, d) + 1) % 7] << endl;
    }
}