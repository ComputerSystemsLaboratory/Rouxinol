#include <iostream>
#include <utility>
#include <cstdio>

using namespace std;

int main(void) {

    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];

    if (nums[2] < nums[1])
        swap(nums[2], nums[1]);

    if (nums[2] < nums[0])
        swap(nums[2], nums[0]);

    if (nums[1] < nums[0])
        swap(nums[1], nums[0]);

    printf("%d %d %d\n", nums[0], nums[1], nums[2]);

    return 0;
}