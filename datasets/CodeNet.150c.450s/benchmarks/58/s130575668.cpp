#include <cstdio>
#include <cstdlib>

class Stack {
private:
    int stack[200];
public:
    void printStack() {
        for (int i=0; i<size(); i++) printf("stack0: %d\n", stack[i]);
    }
    void push(int a) {
        for (int i=0; i<=size(); i++) {
            int t = stack[i]; stack[i]=a; a=t;
        }
    }
    int size() { return sizeof(stack) / sizeof(stack[0]); }
    int pull() {
        int first = stack[0];
        for (int i=0; i<size(); i++) {
            stack[i] = stack[i+1];
        }
        return first;
    }

    void calculate(char c) {
        int b = pull();
        int a = pull();

        //printf("%d %c %d\n", a, c, b);
        char p;
        switch (c) {
            case '+':
                //printf("%d\n", a+b);
                push(a+b);
                break;
            case '-':
                //printf("%d\n", a-b);
                push(a-b);
                break;
            case '*':
                //printf("%d\n", a*b);
                push(a*b);
                break;
            default:
                push(c);
        }
    }
};

int main()
{
    Stack stack;
    for (int i=0; i<200; i++) stack.push(0);
    char s[200];
    while (scanf("%s", s) != EOF) {
        if ( s[0] == '+'
           || s[0] == '-'
           || s[0] == '*' ) {
            stack.calculate(s[0]);
        } else {
            stack.push(atoi(s));
        }
    }
    int z = stack.pull();
    printf("%d\n", z);

    return 0;
}