#include<stdio.h>
 
int main(void) {
    int x,y;
    int menseki,gaishu;
    scanf("%d %d", &x, &y);
    menseki = x * y;
    gaishu = 2*(x + y);
    printf("%d %d\n", menseki, gaishu);
    return 0;
}