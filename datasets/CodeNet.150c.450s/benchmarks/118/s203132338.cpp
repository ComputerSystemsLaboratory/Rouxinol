#include <iostream>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

void solve(int y, int m, int d) {
    int all_day = 0; // since 01/01/01 until 1000/01/01
    FOR(year, 1, 1000) all_day += (year%3==0 ? 20*10 : 20*5 + 19*5);
    ++all_day;

    int by_lastyear = 0, by_lastmonth = 0;
    FOR(year, 1, y) by_lastyear += (year%3==0 ? 20*10 : 20*5 + 19*5);
    FOR(month, 1, m) {
        if(y % 3 == 0) {
            by_lastmonth += 20;
        } else {
            by_lastmonth += (month % 2 == 0 ? 19 : 20);
        }
    }

    int ans = all_day - by_lastyear - by_lastmonth - d;
    cout << ans << "\n";
    return ;
}

int main() {
    int n; cin>>n;
    rep(data,n) {
        int y,m,d; cin>>y>>m>>d;
        solve(y,m,d);
    }
    return 0;
}