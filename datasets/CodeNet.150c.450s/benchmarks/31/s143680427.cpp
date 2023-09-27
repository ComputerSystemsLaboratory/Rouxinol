#include <iostream>
#include <vector>

std::vector<int> GetInput() {
    int n = 0;
    std::vector<int> values;
    std::cin >> n;
    values.resize(n, 0.0);

    for (auto it = values.begin(); it < values.end(); it++) {
        std::cin >> *it;
    }
    return values;
}


int main(int argc, char const* argv[])
{

    auto values = GetInput();
    long int used_min_ix = -1;
    long int cur_min_ix = -1;
    long int used_max_ix = -1;
    long int cur_min = -1;
    long int max = -1;
    long int max_profit = -10000000000;
    if (values.size() == 0) {
        return 0;
    }
    used_min_ix = 0;
    cur_min_ix = 0;
    cur_min = values[0];
    for(int i = 1; i < values.size(); i++) {
        long int profit = values[i] - cur_min;
        if (max_profit < profit) {
            max_profit = profit;
            used_min_ix = cur_min_ix;
            used_max_ix = i;
        }
        if(values[i] < cur_min) {
            cur_min = values[i];
            cur_min_ix = i;
        }
    }

    std::cout << max_profit << std::endl;
    return 0;
}