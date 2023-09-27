#include <stdio.h>
#include <stdbool.h>

bool has_submited[30];

int main() {
    int i;

    for (i=0;i<28;i++) {
        int num;
        scanf("%d", &num);
        has_submited[num-1] = 1;
    }

    for (i=0;i<30;i++) {
        if (!has_submited[i]) {
            printf("%d\n", i+1);
        }
    }
}