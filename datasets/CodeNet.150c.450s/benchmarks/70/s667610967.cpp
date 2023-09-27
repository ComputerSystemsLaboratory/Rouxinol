#include <iostream>
#include <cstdio>

int main(int argc, const char * argv[])
{
    int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m, d;
    while (scanf("%d %d", &m, &d) != 0) {
        int cnt = 0;
        if (m == 0 && d == 0) {
            return 0;
        }
        for (int i = 0; i < m - 1; i++) {
            cnt += month[i];
        }
        cnt += d;

        if (cnt % 7 == 0) {
            printf("Wednesday\n");
        }
        if (cnt % 7 == 1) {
            printf("Thursday\n");
        }
        if (cnt % 7 == 2) {
            printf("Friday\n");
        }
        if (cnt % 7 == 3) {
            printf("Saturday\n");
        }
        if (cnt % 7 == 4) {
            printf("Sunday\n");
        }
        if (cnt % 7 == 5) {
            printf("Monday\n");
        }
        if (cnt % 7 == 6) {
            printf("Tuesday\n");
        }
    }
    return 0;
}