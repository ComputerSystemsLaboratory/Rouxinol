#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_SIZE  1024

void trace(int num, int* array);
int bubbleSort(int num, int* array);

int
main(int argc, char* argv[])
{
    char input[MAX_INPUT_SIZE];

    int num = atoi(fgets(input, sizeof(input), stdin));
    int* array = new int[num];

    atoi(fgets(input, sizeof(input), stdin));
    for (int i = 0; i < num; i++) {
        array[i] = i == 0 ?
            atoi(strtok(input, " ")) : atoi(strtok(NULL, " "));
        //printf("%d\n", array[i]);
    }

    printf("%d\n", bubbleSort(num, array));


    if (array != NULL) {
        delete [] array;
    }

    return 0;
}

void
trace(int num, int* array)
{
    for (int i = 0; i < num; i++) {
        if (i != 0) {
            printf(" ");
        }
        printf("%d", array[i]);
    }
    printf("\n");
}

int
bubbleSort(int num, int* array)
{
    int ret = 0, loopCount = 0;
    
    for (int j = 0; j < num; j++) {
        for (int i = num-1; i > 0; i--) {
            if (array[i] < array[i-1]) {
                int tmp = array[i];
                array[i] = array[i-1];
                array[i-1] = tmp;
                ret++;
            }
        }
    }
    /*
    for (int i = 0; i < num; i++) {
        printf("%d\n", array[i]);
    }
    */
    trace(num, array);

    return ret;
}