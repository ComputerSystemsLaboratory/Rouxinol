#include <iostream>

using namespace std;

int main()
{
        int d[12] = {31, 29, 31, 30,
                                   31, 30, 31, 31,
                                   30, 31, 30, 31};
        string ans[7] = {"Thursday", "Friday", "Saturday", "Sunday",
                                         "Monday", "Tuesday", "Wednesday"};
        int mon, day;

        while (true) {
                cin >> mon >> day;
                if (!mon) {
                        break;
                }
                int sum = 0;
                for (int i = 0; i < mon - 1; i++) {
                        sum += d[i];
                }
                sum += day - 1;
                cout << ans[sum % 7] << endl;
        }


        return 0;
}