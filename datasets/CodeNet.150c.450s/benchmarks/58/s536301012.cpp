#include <stdio.h>
int main(void){
    int p, r, a, b, i_p;
    int stack[100];
    char c;
    char input[399];
    int state; // 0 = normal 1 = number
    
    for (int i=0; i<399; i++) {
        input[i] = 0;
    }
    
    scanf("%399[^\n]", input);

    p = 0; r = 0; i_p = 0; state = 0;
    for (int i=0; i<100; i++) {
        stack[i] = 0;
    }

    while (i_p <= 398 && input[i_p] != 0) {
        c = input[i_p++];
        switch (c) {
            case ' ':
                if (state == 1) {
                    state = 0;
                    stack[p++] = r;
                }
                break;
            case '+':
                a = stack[--p];
                b = stack[--p];
                stack[p++] = b + a;
                break;
            case '-':
                a = stack[--p];
                b = stack[--p];
                stack[p++] = b - a;
                break;
            case '*':
                a = stack[--p];
                b = stack[--p];
                stack[p++] = b * a;
                break;
            default:
                if (state == 0) {
                    state = 1;
                    r = c - '0';
                } else {
                    r = (10 * r) + (c - '0');
                }

                break;
            
        }
    }
    
    printf("%d\n", stack[--p]);
    
}

