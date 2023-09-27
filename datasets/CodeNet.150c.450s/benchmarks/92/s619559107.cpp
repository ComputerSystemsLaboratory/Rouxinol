#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    int sum, digit;

    while (scanf("%d %d", &a, &b) != EOF) {
        digit = 0;
        sum = a + b;
        while (sum > 0) {
            sum /= 10;
            digit++;
        }
        printf("%d\n", digit);
    }

    return 0;
}