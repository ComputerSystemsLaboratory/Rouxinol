#include<stdio.h>

int main(void)
{
    int m, f, r;
    scanf("%d %d %d", &m, &f, &r);
    while(! (( m == -1 ) && ( f == -1 ) && ( r == -1))){
        if( ( m == -1) || ( f == -1)){
            printf("F\n");
        }else if( ( m + f ) >= 80 ){
            printf("A\n");
        }else if( ( m + f ) >= 65){
            printf("B\n");
        }else if( ( m + f ) >= 50){
            printf("C\n");
        }else if( ( m + f ) >= 30){
            if( r >= 50 ){
                printf("C\n");
            }else{
                printf("D\n");
            }
        }else{
            printf("F\n");
        }
        scanf("%d %d %d", &m, &f, &r);
    }
    return 0;
}