#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_SIZE  1024

int calcGCD(int x, int y);

int
main(int argc, char* argv[])
{
    char input[MAX_INPUT_SIZE];

    fgets(input, sizeof(input), stdin);
    int x = atoi(strtok(input, " "));
    int y = atoi(strtok(NULL, " "));

    int ret = calcGCD(x, y);
    printf("%d\n", ret);

    return 0;
}

int
calcGCD(int x, int y)
{
    //printf("x : %d, y : %d\n", x, y);
    int bigger = 0, smaller = 0;
    if (x >= y) {
        bigger  = x;
        smaller = y;
    } else {
        bigger  = y;
        smaller = x;
    }

    if (bigger % smaller == 0) {
        return smaller;
    } else {
        return calcGCD(bigger % smaller, smaller);
    }
}