#include <stdio.h>
int main(){
    int a,b,check=0;
    char sym;
    do{
        scanf("%d %c %d", &a, &sym, &b);
        switch(sym){
            case '+':
                printf("%d\n", a + b);
                break;
            case '-':
                printf("%d\n", a - b);
                break;
            case '*':
                printf("%d\n", a * b);
                break;
            case '/':
                printf("%d\n", a / b);
                break;
            case '?':
                check = 1;
                break;
        }
    } while(check == 0);
    return 0;
}