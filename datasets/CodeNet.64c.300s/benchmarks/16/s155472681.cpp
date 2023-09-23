#include <iostream>
#include <algorithm>

using std::cin;
using std::min;
using std::max;

int main()
{
    int data_num;
    cin >> data_num;

    long rate_min, rate_tmp;
    cin >> rate_min >> rate_tmp;
    long range_max = rate_tmp - rate_min;
    rate_min = min(rate_min, rate_tmp);
    data_num -= 2;

    long range_tmp;
    while (data_num--) {
        cin >> rate_tmp;
        range_tmp = rate_tmp - rate_min;
        rate_min = min(rate_min, rate_tmp);
        range_max = max(range_max, range_tmp);
    }

    std::cout << range_max << std::endl;

    return 0;
}