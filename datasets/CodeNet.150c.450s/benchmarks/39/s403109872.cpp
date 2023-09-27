#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_SIZE  1024

int
main(int argc, char* argv[])
{
    char input[MAX_INPUT_SIZE];

    fgets(input, sizeof(input), stdin);
    
    char *tok  = strtok(input, " ");
    int width  = atoi(tok);
    int height = atoi(strtok(NULL, ""));

    int area   = width * height;
    int length = width * 2 + height * 2;

    printf("%d %d\n", area, length);

    return 0;
}