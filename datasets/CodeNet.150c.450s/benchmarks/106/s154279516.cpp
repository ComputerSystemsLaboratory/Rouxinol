#include <stdio.h>

int main(void) {

    int i;
    int from;
    int to;
    int tgt;
    int count = 0;

    scanf("%d %d %d", &from, &to, &tgt);
    
    for(i = from; i <= to; i++) {
        if(tgt % i == 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}