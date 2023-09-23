#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>

#define MAX_INPUT_SIZE  10240

using namespace std;

int
main(int argc, char* argv[])
{
    char input[MAX_INPUT_SIZE];

    int lines = atoi(fgets(input, sizeof(input), stdin));
    int *array = new int[lines];
    for (int i = 0; i < lines; i++) {
        array[i] = atoi(fgets(input, sizeof(input), stdin));
    }

    sort(array, array + lines);
    int max = array[lines-1];
#if 0
    for (int i = 0; i < lines; i++) {
        printf("%d\n", array[i]);
    }
#endif
    double sq = sqrt(max);
    
    for (int i = 0; i < lines; i++) {
        for (int j = 2; j < sq; j++) {
            if (array[i] != j && array[i] % j == 0) {
                array[i] = -1;
            }
        }
    }

    int num = 0;
    for (int i = 0; i < lines; i++) {
        if (array[i] > 0) {
            num++;
        }
    }
    
    printf("%d\n", num);

    return 0;
}