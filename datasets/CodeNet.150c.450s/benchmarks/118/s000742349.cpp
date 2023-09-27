#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, y, m, d;
    int sum_day;

    cin >> n;

    while(n--) {
        cin >> y >> m >> d;
        sum_day = 0;

        for(int i = y; i < 1000; ++i) {
            for(int j = (i == y ? m : 1); j <= 10; j++) {
                for(int k = (i == y && j == m ? d : 1); k <= (i % 3 ? 20 - (1 - j % 2) : 20); ++k) {
                    ++sum_day;
                }
            }
        }

        cout << sum_day << endl;
    }

}