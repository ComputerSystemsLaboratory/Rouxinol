#include <stdio.h>

int main(void) {
    
    int count;
    int input;
    
    count = 0;

    scanf("%d", &input);

    while(input != 0) {
        count++;
        printf("Case %d: %d\n", count, input);
        scanf("%d", &input);
    }

    return 0;
}