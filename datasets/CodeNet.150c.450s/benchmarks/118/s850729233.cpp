#include <iostream>

using namespace std;

int main() {
    int all_day_num = 196471;
    int no_bid_days_in_year = 20 * 10;
    int normal_day_in_year = 20 * 5 + 19 * 5;

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int Y, M, D;
        cin >> Y >> M >> D;
        int days = 0;
        int y = Y - 1;
        int big_y = y / 3;
        int small_y =  y - big_y;
        days += normal_day_in_year * small_y + no_bid_days_in_year * big_y;
        int m = M - 1;
        if (Y % 3 == 0) {
            days += 20 * m;
        } else {
            int small_m = m / 2;
            int big_m = m - small_m;
            days += 20 * big_m + 19 * small_m;
        }
        days += D;
        cout << (all_day_num - days) << endl;
    }
    return 0;
}