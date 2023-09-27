#include <cstdio>
#include <iostream>

int doPartition(int *arr, int startPos, int endPos);

int main(int argc, char** argv) {
    int length;
    int *inputArr;

    scanf("%d", &length);
    inputArr = (int *) calloc(sizeof(int), length + 1);
    for (int i = 0; i < length; i++) {
        scanf("%d", inputArr + i);
    }

    int pos = doPartition(inputArr, 0, length - 1);

    if (pos == 0) {
        printf("[%d]", *inputArr);
    } else {
        printf("%d", *inputArr);
    }
    for (int i = 1; i < length; i++) {
        if (i == pos) {
            printf(" [%d]", *(inputArr + i));
        } else {
            printf(" %d", *(inputArr + i));
        }
    }
    printf("\n");

    free(inputArr);
    return 0;
}

int doPartition(int *arr, int startPos, int endPos) {
    int sml = startPos - 1, cur = startPos;
    int ref = *(arr + endPos);
    
    while (cur < endPos) {
        if (*(arr + cur) <= ref) {
            if (++sml != cur) {
                int tmp = *(arr + sml);
                *(arr + sml) = *(arr + cur);
                *(arr + cur) = tmp;
            }
        }
        cur++;
    }

    if (cur == endPos) {
        sml++;
        int tmp = *(arr + sml);
        *(arr + sml) = *(arr + cur);
        *(arr + cur) = tmp;
    }

    return sml;
}
