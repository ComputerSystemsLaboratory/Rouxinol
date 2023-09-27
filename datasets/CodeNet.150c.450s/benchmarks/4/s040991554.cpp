#include<stdio.h>
 
int main(void)
{
    int m, f, r;
    while(1){
        scanf("%d %d %d",&m, &f, &r);
        if(m == -1 && f == -1 && r == -1){
            break; 
        }else if(m == -1 ||f == -1 ||f + m < 30){
            printf("F\n");
        }else if(m + f >= 80 ){
            printf("A\n");
        }else if(m + f >= 65 ){
            printf("B\n");
        }else if(m + f >= 50 ||r >= 50 ){
            printf("C\n");
        }else{
            printf("D\n");
        }
    }
    return 0;
}