#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT_SIZE  1024
#define INT_MIN -2147483648

int
main(int argc, char* argv[])
{
    char input[MAX_INPUT_SIZE];

    int line = atoi(fgets(input, sizeof(input), stdin));
    int max = INT_MIN, min = atoi(fgets(input, sizeof(input), stdin));

    //printf("line : %d, min : %d\n", line, min);

    for (int i = 1; i < line; i++) {
        int curNum = atoi(fgets(input, sizeof(input), stdin));

        int s = curNum - min;
        if (max < s) {
            max = s;
        }

        if (curNum < min) {
            min = curNum;
        }
    }


    printf("%d\n", max);

    return 0;
}