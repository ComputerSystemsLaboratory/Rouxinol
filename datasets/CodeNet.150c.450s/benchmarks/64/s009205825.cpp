#include <cstdio>
#include <iostream>
using namespace std;

bool Solve(int target, int dut[], int index, int max)
{
    bool ret;

    if (target == 0) {
        return true;
    }
    if (index == max) {
        return false;
    }

    ret = Solve(target, dut, index + 1, max) | Solve(target - dut[index], dut, index + 1, max);

    return ret;
}

int main(void)
{
    int i, j;
    int dut[200];
    int target;

    scanf("%d", &i);
    for (int k = 0; k < i; k++) {
        scanf("%d", &dut[k]);
    }
    scanf("%d", &j);
    for (int k = 0; k < j; k++) {
        scanf("%d", &target);
        if (Solve(target, dut, 0, i) == true) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }

    return 0;
}