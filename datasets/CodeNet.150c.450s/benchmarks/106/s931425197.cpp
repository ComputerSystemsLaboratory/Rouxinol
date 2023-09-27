#include<stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    d = 0;
    for (a; a <= b; a++){
        if(c % a == 0){
            d++;
        }
    }
    printf("%d\n", d);
}
