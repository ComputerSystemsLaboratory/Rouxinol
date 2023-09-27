#include <stdio.h>

int main(void)
{
    int m;
    int f;
    int r;
    while(m != -1 || f != -1 || r != -1){
        scanf("%d",&m);
        scanf("%d",&f);
        scanf("%d",&r);
            if(m == -1 && f == -1 && r == -1){
                break;
            }
            if(m == -1 || f == -1){
                printf("F\n");
            }else if(m + f >= 80){
                printf("A\n");
            }else if(m + f >= 65 && m + f < 80){
                printf("B\n");
            }else if(m + f >= 50 && m + f < 65 ){
                printf("C\n");
            }else if(m + f >= 30 && m + f < 50 && r >=50){
                printf("C\n");
            }else if(m + f >= 30 && m + f < 50 && r < 50){
                printf("D\n");
            }else if(m + f < 30){
                printf("F\n");
            }
    }                
    return 0;
}