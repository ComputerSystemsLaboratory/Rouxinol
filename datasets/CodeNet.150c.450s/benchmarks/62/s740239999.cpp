#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {

    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];

    for (int i = 2; i >= 1; --i) {
        for (int j = i - 1; j >= 0; --j) {
            if (nums[i] < nums[j]) {
                int tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }
        }
    }

    printf("%d %d %d\n", nums[0], nums[1], nums[2]);

    return 0;
}