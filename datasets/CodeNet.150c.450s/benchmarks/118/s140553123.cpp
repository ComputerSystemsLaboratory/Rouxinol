//https://onlinejudge.u-aizu.ac.jp/challenges/sources/ICPC/Prelim/1179?year=2012

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int year, month, day;
        cin >> year >> month >> day;

        int ans = 0;
        // 月末まで
        if (year % 3 == 0 || month % 2 == 1) {
            ans += 20 - day;
        } else {
            ans += 19 - day;
        }

        // 年末まで
        for (int i = month + 1; i <= 10; i++) {
            if (year % 3 == 0 || i % 2 == 1) {
                ans += 20;
            } else {
                ans += 19;
            }
        }

        // 記念日まで
        for (int i = year + 1; i < 1000; i++) {
            if (i % 3 == 0) {
                ans += 200;
            } else {
                ans += 195;
            }
        }

        cout << ans + 1 << endl;
    }
    return 0;
}

/*
 * 「月末まで」「年末まで」「記念日まで」
 *  に分けて数える。
 *
 */
