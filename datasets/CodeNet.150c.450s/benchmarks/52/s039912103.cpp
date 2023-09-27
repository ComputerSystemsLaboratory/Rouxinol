#include<stdio.h>
 
 
int main(void)
{
    int num, top;
    int train[1024];
    int i;
 
    top = 0;
 
    while (scanf("%d", &num) != EOF){
        if (num == 0){
            printf("%d\n", train[top - 1]);
            train[top - 1] = 0;
            top--;
        }
        else {
            train[top] = num;
            top++;
        }
    }
 
    return 0;
}