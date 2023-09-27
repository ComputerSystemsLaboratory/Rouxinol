#include <stdio.h>
#include <cctype>

using namespace std;

int ar[100];
int sp = -1;

inline void push(int x){
    sp++;
    ar[sp] = x;
}

inline int pop(){
    sp--;
    return ar[sp+1];
}

int main(int argc, char const* argv[])
{
    int lh,rh,r;
    char op;

    while (EOF != (r = getchar())) {
        if(isspace(r)){
            continue;
        }

        if(isdigit(r)){
            ungetc(r, stdin);
            scanf("%d ", &r);
        }else{
            rh = pop();
            lh = pop();
            switch (r) {
                case '+':
                    r = lh + rh;
                    break;
                case '-':
                    r = lh - rh;
                    break;
                case '*':
                    r = lh * rh;
                    break;
            }
        }
        push(r);
    }

    r = pop();
    printf("%d\n", r);

    return 0;
}