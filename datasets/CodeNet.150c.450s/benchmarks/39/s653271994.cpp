#include <stdio.h>
#define MAX 100
#define MIN 1
 
int main(void){
 
    int a, b;
    scanf("%d %d", &a, &b);
 
    if(a >= MIN && b <= MAX){
 
        printf("%d %d\n", a * b, 2 * (a + b));
    }
    return 0;
}