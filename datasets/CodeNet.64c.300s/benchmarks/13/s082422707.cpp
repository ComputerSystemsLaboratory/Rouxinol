#include <cstdio>
#include <iostream>
using namespace std;

#if 0
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
#else

int Fibonatch(int num)
{
    int i;
    int result[45];

    result[0] = result[1] = 1;
    for (i = 2; i <= num; i++) {
        result[i] = result[i - 1] + result[i - 2];
    }

    return result[num];
}

int main(void)
{
    int num;
    int result;

    scanf("%d", &num);

    result = Fibonatch(num);
    printf("%d\n", result);

    return 0;
}

#endif