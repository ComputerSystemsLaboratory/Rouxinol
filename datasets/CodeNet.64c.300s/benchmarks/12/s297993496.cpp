#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT_SIZE  1024

int
main(int argc, char* argv[])
{
    char input[MAX_INPUT_SIZE];

    int n = atoi(fgets(input, sizeof(input), stdin));
    int ret = n * n * n;

    printf("%d\n", ret);

    return 0;
}