#include <stdio.h>
#define MAX 100
#define MIN 1

int main(void){

    int x, answer;
    scanf("%d", &x);

    if(x >= MIN && x <= MAX){

        answer = x * x * x;
        printf("%d\n", answer);
    }
    return 0;
}