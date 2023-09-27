#include <cstdio>
#include <iostream>
#include <vector>

bool can_be_solved(std::vector<int>& data, int index, int current_remain)
{
    if(data.size() <= index) {
        return false;
    } else if(current_remain == data[index]) {
        return true;
    }
    return can_be_solved(data, index + 1, current_remain) ||
           can_be_solved(data, index + 1, current_remain - data[index]);
}

int main()
{
    int group_1_size, group_2_size, group_2_data;
    std::cin >> group_1_size;
    std::vector<int> data(group_1_size);
    for(int i = 0; i < data.size(); i++) {
        std::cin >> data[i];
    }

    std::cin >> group_2_size;
    for(int i = 0; i < group_2_size; i++) {
        std::cin >> group_2_data;
        if(can_be_solved(data, 0, group_2_data)) {
            puts("yes");
        } else {
            puts("no");
        }
    }
}