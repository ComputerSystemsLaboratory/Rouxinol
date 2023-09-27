#include <bits/stdc++.h>

const long Day_num = 365;
const long type_num = 26;

class Scoring {
public:
    Scoring(const long arg_days, const std::vector<long>& arg_costs, const std::vector<std::vector<long>>& arg_incentives);
    std::vector<long> score(const std::vector<long>& arg_types);
private:
    long days;
    std::vector<long> costs;
    std::vector<std::vector<long>> incentives;
};

std::vector<long> Scoring::score(const std::vector<long>& arg_types) {
    std::vector<long> result(days);
    long satisfy = 0;
    std::vector<long> last_days(type_num, 0);


    for (long day = 1; day <= days; ++day) {
        const auto exe_type = arg_types[day-1];
        satisfy += incentives[day-1][exe_type-1];
        last_days[exe_type-1] = day;
        for (long type = 1; type <= type_num; ++type) {
            satisfy -= costs[type-1] * (day - last_days[type-1]);
        }
        result[day-1] = satisfy;
    }
    return result;
}

Scoring::Scoring(const long arg_days, const std::vector<long>& arg_costs, const std::vector<std::vector<long>>& arg_incentives) {
    days = arg_days;
    costs = arg_costs;
    incentives = arg_incentives;
}

int main() {
    long D;
    std::cin >> D;
    std::vector<long> costs(type_num);
    for (long type = 1; type <= type_num; ++type) {
        std::cin >> costs[type-1];
    }
    std::vector<std::vector<long>> incentives(D, std::vector<long>(type_num));
    for (long day = 1; day <= D; ++day) {
        for (long type = 1; type <= type_num; ++type) {
            std::cin >> incentives[day-1][type-1];
        }
    }
    std::vector<long> types(D);
    for (long day = 1; day <= D; ++day) {
        std::cin >> types[day-1];
    }
    Scoring scoring(D, costs, incentives);
    const auto scores = scoring.score(types);
    for (const auto score : scores) {
        std::cout << score << std::endl;
    }
}