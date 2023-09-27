#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void push(int elem[], int value, int* pNum)
{
    elem[*pNum] = value;
    ++(*pNum);
    return;
}

int pop(int elem[], int* pNum)
{
    int ret = 0;

    if (*pNum > 0) {
        --(*pNum);
        ret = elem[*pNum];
    }

    return ret;
}

int main(void)
{
    int  elem[1000];
    int  num = 0;
    char input[100];
    int  x, y;

    while (scanf("%s", input) != EOF) {
        switch (input[0]) {
        case '+' :
            x = pop(elem, &num);
            y = pop(elem, &num);
            push(elem, y+x, &num);
            break;
        case '-' :
            x = pop(elem, &num);
            y = pop(elem, &num);
            push(elem, y-x, &num);
            break;
        case '*' :
            x = pop(elem, &num);
            y = pop(elem, &num);
            push(elem, y*x, &num);
            break;
        case '/' :
            x = pop(elem, &num);
            y = pop(elem, &num);
            push(elem, y/x, &num);
            break;
        default :
            x = atoi(input);
            push(elem, x, &num);
            break;
        }
    }

    printf("%d\n", pop(elem, &num));

    return 0;
}