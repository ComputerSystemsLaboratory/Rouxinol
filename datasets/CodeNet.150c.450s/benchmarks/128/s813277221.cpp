#include <stdio.h>

int main() {
    const int MAX = 20;
    char input[MAX];
    for (int i = 0; i < MAX; ++i) {
        input[i] = 0;
    }
    char result[MAX];
    for (int i = 0; i < MAX + 1; ++i) {
        result[i] = 0;
    }

    scanf("%s", &input);
    int counts = 0;
    {
        int offset = 0;
        while (input[offset] != 0) {
            counts++;
            offset++;
        }
    }

    for (int i = 0; i < counts; ++i) {
        result[counts - i - 1] = input[i];
    }

    printf(result);
    printf("\n");
    return 0;
}