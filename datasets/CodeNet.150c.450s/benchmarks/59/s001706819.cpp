#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_SIZE  1024
#define INPUT_FROM_FILE

int* createArray(int size, char* input);
void insertionSort(int size, int* array);
void trace(int size, int* array);

int
main(int argc, char* argv[])
{
    char input[MAX_INPUT_SIZE];

    int size = atoi(fgets(input, sizeof(input), stdin));

    while ((fgets(input, sizeof(input), stdin)) != NULL) {
        int* array = createArray(size, input);
        insertionSort(size, array);

        if (array != NULL) {
            delete [] array;
        }
    }

    return 0;
}


int*
createArray(int size, char* input)
{
    int* array = new int[size];

    if (array != NULL) {
        for (int i = 0; i < size; i++) {
            array[i] = i == 0 ?
                atoi(strtok(input, " ")) : atoi(strtok(NULL," "));
        }
    }

    return array;
}

void
insertionSort(int size, int *array)
{
    for (int i = 0; i < size; i++) {
        int curNum = array[i];
        for (int j = 0; j < i; j++) {
            if (curNum < array[j]) {
                int blockSize = (i - j) * sizeof(int);
                int* tmpBlock = new int[blockSize];
                if (tmpBlock == NULL) {
                    fprintf(stderr, "Error, no memory error");
                } else {
                    memcpy(tmpBlock, &array[j], blockSize);
                    memcpy(&array[j+1], tmpBlock, blockSize);
                    array[j] = curNum;

                    delete[] tmpBlock;
                }
                break;
            }
        }
        trace(size, array);
    }
}

void
trace(int size, int* array)
{
    for (int i = 0; i < size; i++) {
        if (i != 0) printf(" ");
        printf("%d", array[i]);
    }
    printf("\n");
}