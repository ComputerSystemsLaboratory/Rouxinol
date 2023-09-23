#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i = 1;
    do{
        int x = i;
        if( x % 3 == 0){
            printf(" %d", i);
            continue;
        }
        do{
            if( x % 10 == 3){
                printf(" %d", i);
                break;
            }
            x /= 10;
        }while( x );
    }while( ++i <= n);
    printf("\n");
}