#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    auto numberOfDaysInYear = [](int y) {
        if (y % 3 == 0) {
            return 20 * 10;
        }
        else {
            return 20 * 5 + 19 * 5;
        }
    };

    vector<int> ym(1001, 0);
    ym[1] = numberOfDaysInYear(1000 - 1);
    for (int i = 2; i < ym.size(); ++i) {
        ym[i] = numberOfDaysInYear(1000 - i) + ym[i - 1];
    }

    auto remainDays = [&numberOfDaysInYear, &ym](int y, int m, int d) {
        auto num = numberOfDaysInYear(y);
        auto days = 0;
        if (y % 3 == 0) {
            days = (10 - m) * 20 + 20 - d;
        }
        else {
            if (m % 2 == 0) {
                days = (10 - m) * 20 - ((10 - m) / 2 + 1) + 20 - d;
            }
            else {
                days = (10 - m) * 20 - ((10 - m) / 2) + 19 - d;
            }
        }

        return days + ym[1000 - y - 1] + 1;
    };

    for (int i = 0; i < n; ++i) {
        int y, m, d;
        cin >> y >> m >> d;
        cout << remainDays(y, m, d) << endl;
    }
}