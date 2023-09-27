#include <cstdio>

int compute_fibonacci(int num)
{
    int prev_num = 1;
    int current_num = 1;
    for(int i = 2; i <= num; i++) {
        int tmp = current_num;
        current_num = current_num + prev_num;
        prev_num = tmp;
    }
    return current_num;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", compute_fibonacci(num));
    return 0;
}