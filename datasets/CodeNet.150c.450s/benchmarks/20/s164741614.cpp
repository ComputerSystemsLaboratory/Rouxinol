#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_SIZE  1024

int
main(int argc, char* argv[])
{
    char input[MAX_INPUT_SIZE];

    int time = atoi(fgets(input, sizeof(input), stdin));

    int hour   = time / 60 / 60;
    int minute = (time - (hour*60*60)) / 60;
    int sec    = (time - (hour*60*60) - (minute*60));

    printf("%d:%d:%d\n", hour, minute, sec);

    return 0;
}