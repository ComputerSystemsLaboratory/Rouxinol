#include <bits/stdc++.h>

const static std::string days[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
const static int months[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int cnt;
    int month, day;
    int startofMonths[12];
    cnt = 0;
    for (int i = 0; i < 12; i++) {
        startofMonths[i] = cnt;
        cnt += months[i];
    }
    std::cin >> month >> day;
    while (month != 0) {
        cnt = startofMonths[month-1];
        cnt += day -1;
        std::printf("%s\n", days[cnt % 7].c_str());
        std::cin >> month >> day;
    }
    return 0;
}

