#include <cstdio>

using namespace std;

int main(void) {
    int a, b;
    char op;
    
    while(1){
        scanf("%d %c %d", &a, &op, &b);
    
        switch(op){
            case '+':
                printf("%d\n", a + b);
                break;
            case '*':
                printf("%d\n", a * b);
                break;
            case '-':
                printf("%d\n", a - b);
                break;
            case '/':
                printf("%d\n", (int)((float)a / b));
                break;
        }
        if(op == '?'){
            break;
        }
    }
    return 0;
}