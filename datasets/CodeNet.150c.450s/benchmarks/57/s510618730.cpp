#include <stdio.h>


int main(void){
    int a, b;
    char op;

    scanf("%d %c %d", &a, &op, &b);
    while(op != '?'){
        switch(op){
        case '+':
            printf("%d\n", a+b);
            break;
        case '-':
            printf("%d\n", a-b);
            break;
        case '*':
            printf("%d\n", a*b);
            break;
        case '/':
            printf("%d\n", a/b);
            break;
        }
        scanf("%d %c %d", &a, &op, &b);
    }
    return 0;
}