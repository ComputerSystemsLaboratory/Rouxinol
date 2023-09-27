#include <stdio.h>

int main(void){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a >= 0 && b >= 0 && c >= 0 && a <= 100 && b <= 100 && c <= 100){

        if(a < b && b < c){

            printf("Yes\n");
        }
        else{

            printf("No\n");
        }

    }

    return 0;

}