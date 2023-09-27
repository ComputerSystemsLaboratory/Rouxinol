#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> nums(3);
    std::cin >> nums[0] >> nums[1] >> nums[2];
    std::sort(nums.begin(), nums.end());
    std::cout << nums[0] << " " << nums[1] << " " << nums[2] << std::endl;
    return 0;
}