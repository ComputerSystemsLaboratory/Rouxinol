#include <cstdio>
#include <iostream>
using namespace std;

int Fibonatch(int result[], int num)
{
    int ret = result[num];

    if (ret == 0) {
        if (num > 1) {
            ret = Fibonatch(result, num - 1) + Fibonatch(result, num - 2);
        }
        else {
            ret = 1;
        }
        result[num] = ret;
    }

    return ret;
}

int main(void)
{
    int num;
    int ret[45] = {0};
    int result;

    scanf("%d", &num);
    result = Fibonatch(ret, num);

    printf("%d\n", result);

    return 0;
}