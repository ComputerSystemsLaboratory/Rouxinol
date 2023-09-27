#include <iostream>
#include <vector>

using std::cin;
using std::vector;

int main()
{
    int from_num;
    cin >> from_num;
    vector<int> from(from_num);
    for (auto i = 0; i < from_num; i++) {
        cin >> from.at(i);
    }

    int target_num;
    cin >> target_num;
    vector<int> target(target_num);
    for (auto i = 0; i < target_num; i++) {
        cin >> target.at(i);
    }

    int cnt = 0;
    for (auto i = 0; i < target_num; i++) {
        from.push_back(target.at(i));
        for (auto j = 0; j != from_num; j++) {
            if (from.at(j) == target.at(i)) {
                cnt++;
                break;
            }
        }
    }

    std::cout << cnt << std::endl;

    return 0;
}