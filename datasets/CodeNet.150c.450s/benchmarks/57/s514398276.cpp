#include <cstdio>
using namespace std;
int main(){
    int a, b, c;
    char op;
    while(1){
        scanf("%d %c %d", &a, &op, &b);
        if (op == '?') break;
        switch(op){
            case '+': c = a + b; break;
            case '-': c = a - b; break;
            case '*': c = a * b; break;
            case '/': c = a / b;
        }
        printf("%d\n", c);
    }
    return 0;
}

