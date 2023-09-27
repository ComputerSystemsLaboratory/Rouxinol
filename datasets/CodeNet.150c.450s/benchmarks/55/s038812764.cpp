#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char x;
    int n,sum;
    while(1) {
        sum = 0;
        scanf("%c", &x);
        if(x=='0')
            break;
        while(x!='\n') {
              n=x-'0';
              sum+=n;
              scanf("%c", &x);
        }
        printf("%d\n", sum);
    }

    return 0;
}