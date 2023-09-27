#include <stdio.h>

int main(){
    char op;
    int a, b;
    
    while(scanf("%d %c %d", &a, &op, &b), op != '?'){
        
        switch(op){
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
        }
    }
    
    return 0;
}