#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_SIZE  1024

void dumpData(int* array, int num);
void readData(int* array, int num, FILE* stdin);
int  selectionSort(int* array, int num);

int
main(int argc, char* argv[])
{
    char input[MAX_INPUT_SIZE];
    int num = atoi(fgets(input, sizeof(input), stdin));

    int* array = new int[num];
    if (!array) {
        fprintf(stderr, "Error. Cannot allocate memory\n");
        exit(1);
    } 

    readData(array, num, stdin);
    //dumpData(array, num);
    int exchangeNum = selectionSort(array, num);
    dumpData(array, num);
    printf("%d\n", exchangeNum);

    if (!array) {
        delete [] array;
        array = NULL;
    }

    return 0;
}

void
dumpData(int* array, int num)
{
    for (int i = 0; i < num; i++) {
        if (i != 0) printf(" ");
        printf("%d", array[i]);
    }
    printf("\n");
}

void
readData(int* array, int num, FILE* stdin)
{
    char input[MAX_INPUT_SIZE];

    fgets(input, sizeof(input), stdin);

    for (int i = 0; i < num; i++) {
        char* tok = i == 0 ? strtok(input, " ") : strtok(NULL, " ");
        array[i] = atoi(tok);
    }

    return;
}

int
selectionSort(int* array, int num)
{
    int exchangeNum = 0;

    for (int i = 0; i < num; i++) {
        int minElem = i;
        for (int j = i+1; j < num; j++) {
            if (array[j] < array[minElem]) {
                minElem = j;
            }
        }
        if (array[i] > array[minElem]) {
            int tmp = array[i];
            array[i] = array[minElem];
            array[minElem] = tmp;
            exchangeNum++;
        }
    }

    return exchangeNum;
}