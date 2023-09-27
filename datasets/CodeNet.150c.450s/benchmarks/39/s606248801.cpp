#include <stdio.h>

int main(void){
        int a, b, area, length;

        scanf("%d %d",&a, &b);
        area = a*b;
        length = (a*2)+(b*2);

        if(a>=1&&b<=100){
        printf("%d %d\n",area, length);
        }

        return 0;
}