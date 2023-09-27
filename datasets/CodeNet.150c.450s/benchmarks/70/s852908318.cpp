#include <iostream>

int main()
{
    while (true) {
        int m, d;
        std::cin >> m >> d;
        if (m == 0) break;

        const char *weekdays[] = {
            "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"
        };
        const int total_days[] = { 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335 };
        std::cout << weekdays[(total_days[m - 1] + d - 1) % 7] << std::endl;
    }
}