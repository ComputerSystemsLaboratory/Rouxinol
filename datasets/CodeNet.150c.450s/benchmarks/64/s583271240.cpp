#include <iostream>
#include <vector>

using std::cin;

int from_num;
std::vector<int> from;

bool canMake(int id, int target);

int main()
{
    cin >> from_num;
    from.reserve(from_num);

    for (auto i = 0; i < from_num; i++) {
        int in;
        cin >> in;
        from.push_back(in);
    }

    int target_num;
    cin >> target_num;

    int target;
    while (target_num--) {
        cin >> target;
        std::cout << (canMake(0, target)? "yes": "no") << std::endl;
    }

    return 0;
}

bool canMake(int id, int target)
{
    if (id == from_num) {
        return (target == 0);
    }

    if (canMake(id + 1, target)) {
        return true;
    }
    if (canMake(id + 1, target - from.at(id))) {
        return true;
    }

    return false;
}