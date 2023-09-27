#include <stdio.h>

int main() {
    while (1) {
        int i;
        int value, change;
        int array[6] = {500, 100, 50, 10, 5, 1};
        int times = 0; 
        int tmp;

        scanf("%d", &value);
        if (!value) return 0;

        change = 1000 - value;

        tmp = change;
        for (i=0;i<6;i++) {
            times += (tmp/array[i]);
            tmp %= array[i];
        }

        printf("%d\n", times);
    }
}